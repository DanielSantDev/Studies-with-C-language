#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
#include <stdlib.h>
#define cls system("cls");
int letras[8][5] ={{15,16,14, 1,30}, /* letra  S */
                   {14,17,31,17,17}, /* letra  A */
                   {14, 4, 4, 4,14}, /* letra  I */
                   {17,25,21,19,17}, /* letra  N */
                   {30,17,17,17,30}, /* letra  D */
                   {14,17,17,17,14}, /* letra  O */
                   { 0, 0, 0, 0, 0}, /* letra    */
                   { 1, 2, 4, 0,16}, /* letra  ! */
                  };
void gotoxy_2(int x, int y){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});
}
void menu(){
    printf ("\t\t\n\n"                               );
    cls
    printf ("\t\t 0 - Sair do programa\n"            );
    printf ("\t\t 1 - Cadastrar\n"                   );
    printf ("\t\t 2 - Listar todos os livros.\n"     );
    printf ("\t\t 3 - Listar todas as revistas.\n"   );
    printf ("\t\t 4 - Listar as obras por caixa.\n"  );
}
FILE* AbreArquivo(char modo, char caminho[  30]  ){
    FILE *arquivo                                 ;
    switch( modo                                 ){
        case 'g'                                  :  // criar e gravar no final arquivo
            arquivo = fopen(caminho,"w"          );
            break                                 ;
        case 'l'                                  :  // abrir arquivo para ler dese o começo dele
            arquivo = fopen(caminho,"r"          );
            break                                 ;
        case 'a'                                  :  // abrir arquivo para ler e gravar no final dele
            arquivo = fopen(caminho,"a+"         );
            break                                 ;
    }
    if( arquivo == NULL                          ){
        printf("Nao foi possivel abrir o arquivo");
        exit( 0                                  );
    }
    return arquivo                                ;
}
void FecharArquivo( FILE *arquivo                ){
    fclose( arquivo                              );
}
void Cadastra( char tipo[], char titulo[]         ,
    char editora[],  char autor[],  int caixa     ,
    int ano,int ISBN                             ){
    FILE *arquivo                                 ;
    arquivo = fopen("mapa.txt","a+"              );
    if( arquivo == NULL                          ){
        arquivo = fopen("mapa.txt","w"           );
    }
    fprintf(arquivo,"%s%s%s%s%d\n%d\n%d\n"        ,
        tipo,titulo,autor,editora,caixa,ano,ISBN );
    fclose( arquivo                              );
}
void CadastraRevista(char titulo[],char editora[] ,
    char autor[], int caixa, int ano,int ISBN    ){
    FILE *arquivo                                 ;
    arquivo = AbreArquivo('a', "mapa.txt"        );
    fprintf(arquivo, "%s%s%s%d\n%d\n%d\n"         ,
    titulo, autor, editora, caixa, ano, ISBN     );
    fclose(arquivo                               );
}
void Listar(  char tip[]                         ){
    FILE *arquivo                                 ;
    int i , flag=0                                ;
    char titulo[70],autor[70],editora[70],tipo[30];
    int  ISBN, caixa,  opcao,           ano       ;
    arquivo = AbreArquivo('l',"mapa.txt"         );
    while(fscanf(arquivo,"%s%s%s%s%d%d%d",&tipo   ,
        &titulo, &autor, &editora,&caixa          ,
        &ano, &ISBN )!= EOF                      ){
        if( strcmp( tipo , tip ) == 0            ){
            if( ! flag ){
            if( strcmp(tip,"LIVRO")==0 )
              printf("Listando Todos Os Livros\n");
            else
            printf("Listando Todas As Revistas\n");
            }
            for( i=0; i<50; i++)   printf ("*"   );
            printf("             \n"             );
            printf("Titulo --: %s\n",titulo      );
            printf("Autor ---: %s\n",editora     );
            printf("Editora -: %s\n",autor       );
            printf("Caixa ---: %d\n",caixa       );
            printf("Ano -----: %d\n",ano         );
            printf("ISBN ----: %d\n",ISBN        );
            flag = 1;
        }
    }
    fclose(    arquivo                           );
}
listar_p_cx( int cx                              ){
    FILE *arquivo                                 ;
    int i , flag=0                                ;
    char titulo[70],autor[70],editora[70],tipo[30];
    int  ISBN, caixa,  opcao,           ano       ;
    arquivo = AbreArquivo('l',"mapa.txt"         );
    while(fscanf(arquivo,"%s%s%s%s%d%d%d",&tipo   ,
        &titulo, &autor, &editora,&caixa          ,
        &ano, &ISBN )!= EOF                      ){
        if( cx == caixa                          ){
            if( ! flag )
              printf("Listando o conteudo da caixa [ %d ]\n",cx);
            for( i=0; i<50; i++)   printf ("*"   );
            printf("             \n"             );
            printf("Titulo --: %s\n",titulo      );
            printf("Autor ---: %s\n",editora     );
            printf("Editora -: %s\n",autor       );
            printf("Caixa ---: %d\n",caixa       );
            printf("Ano -----: %d\n",ano         );
            printf("ISBN ----: %d\n",ISBN        );
            flag = 1;
        }
    }
    fclose(    arquivo                           );
    system(    "pause"                           );
}
void saindo(){
    int w,px,py,x;                            /* variáveis simples                       */
    HANDLE hOut;                              /* controle dos dispositivos do pc         */
    HBITMAP hb;
    long lg;
    hOut= GetStdHandle(STD_OUTPUT_HANDLE);    /* pega a saída padrão                     */
    CONSOLE_SCREEN_BUFFER_INFO SBInfo;        /* informações sobre a buffer da tela      */
    GetConsoleScreenBufferInfo(hOut, &SBInfo);/* pega a posição do cursor do console     */

    GetBitmapBits(hb,lg,NULL);

    px = SBInfo.dwCursorPosition.X;       /* pX será a posição da coluna do cursor no console  */
    py = SBInfo.dwCursorPosition.Y;       /* pY será a posição da linha do cursor no console   */
    int y1=py+1,x1=20,y2=y1,x2=x1,j,i,a,b;/*y1=linha inicial  y2 para recuperar a linha inicial*/
    for(i=0;i<8;i++){                     /*  sao 8 letras                                     */
        for(j=0;j<5;j++){                 /*o caractere é de 5 linhas                          */
            x1 = x2;
            a=letras[i][j];               /*pega o numero da 1 linha do caractere              */
            for(b=0;b<5;b++){             /*aqui eh um numero de apenas 8 bits                 */
                gotoxy_2(x1,y1);
                if(a % 2 != 0){           /*se bit 0 igual 1                                   */
                    printf("%c",219);     /*coloca espaço invertido senão coloca espaço normal */
                }
                else{
                    printf(" ");          /*senão coloca espaço normal                         */
                }
                a=a/2;                    /*dividindo numero por 2 desloca os bits para direita*/
                x1--;
                Sleep(10);
            }
            y1++;                   /*muda para proxima linha                                  */
            x1=x2;                  /*volta para a coluna inicial                              */
        }                           /*proxima linha                                            */
        x2=x2+6;                    /*avança 6 colunas posicionando para o prox caract         */
        y1=y2;                      /*volta para linha inicial                                 */
    }                               /*imprimiu o primeiro caractere                            */
    for(x=0;x<5;x++)printf("\n");
}
int main(                                        ){
    char titulo[70],autor[70],editora[70],tipo[30];
    int  ISBN, caixa,   opcao,  ano, i            ;
    do{
        menu(                                    );
        printf("\n\t\t     Digite uma opcao: "   );
        scanf( "%d", &opcao                      );
        system("cls"                             );
        switch( opcao                            ){
        case 1                                    :
            printf("Digite\n"                    );
            printf(" Livro -- para Cadastrar Livro\n" );
            printf(" Revita - para Cadastrar Revista ");
            fflush(stdin                         );
            fgets(tipo,30,stdin                  );
            for(i=0; i<strlen(tipo); i++          )
            tipo[i] = toupper( tipo[i]           );
            printf("Digite o titulo: "           );
            fflush(stdin                         );
            setbuf(stdin,NULL                    );
            fgets(titulo, 70, stdin              );
            printf("Digite o autor: "            );
            setbuf(stdin,NULL                    );
            fgets(autor,70, stdin                );
            printf("Digite o editora: "          );
            setbuf(stdin,NULL                    );
            fgets(editora, 70,stdin              );
            printf("Digite a caixa: "            );
            scanf("%d", &caixa                   );
            printf("Digite o ano: "              );
            scanf("%d", &ano                     );
            printf("Digite o ISBN: "             );
            scanf("%d", &ISBN                    );
            Cadastra(tipo,titulo, autor, editora  ,
                     caixa,ano, ISBN             );
            system( "pause"                      );
            break                                 ;
        case 2                                    :
            Listar( "LIVRO"                      );
            system("pause"                       );
            break                                 ;
        case 3                                    :
            Listar( "REVISTA"                    );
            system("pause"                       );
            break                                 ;
        case 4                                    :
            printf(" Qual o numero da caixa , procurar ");
            scanf("%d",&caixa);
            listar_p_cx(caixa);
            break;
        case 0                                    :
            printf("\n\n\t\t\tFinalizando...\n\n");
            saindo();
            printf("                "            );
            system( "pause"                      );
            exit( 0                              );
            break                                 ;
        default                                   :
            printf("\n\nOpcao invalida! Tente Novamente!\n\n");
            system( "pause"                      );
        }
    }while( opcao != 0                           );
    return 32768                                  ;
}
