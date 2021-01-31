//String é um vetor de caracteres com um delimitador que indica o final da string: \0
//Na prática strings são usadas para representar textos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define ex7

#ifdef ex1
main()
{
    char string[5]="string";
    printf("%s", string);
}
#endif // ex1

#ifdef ex2
main()
{
    char str[10]="Daniel";
    int i;
    printf("Contando... ");
    for(i=0;str[i] != '\0';i++)
    {
       printf("%d, ",i);
    }
    printf("\nA quantidade de caracteres eh %d\n", i);
    //Outra forma através da biblioteca string
    printf("De outra forma; %d", strlen(str));
}
#endif // ex2

#ifdef ex3
/*Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
(mai´uscula ou min´ uscula)*/
main()
{
    char str[30];
    int i;
    printf("Digite um nome: ");
    scanf(" %s",str);
        if(str[0]=='a' || str[0]=='A')
        {
        printf("%s", str);
        }
}
#endif // ex3

#ifdef ex4
main()
{
    char nome[30];
    printf("Digite um nome: ");
    scanf(" %s", nome);
    for(int i=0;i<4;i++)
    {
        printf("%c", nome[i]);
    }
}
#endif // ex4

#ifdef ex5
main()
{
    char str[30];
    int i;
    printf("Digite um nome: ");
    scanf("%[^\n]", str);
    printf("Contando... ");
    for(i=0;str[i]!='\0';i++)
    {
        printf("%d, ", i);
    }
    printf("\nEsse nome tem o total de %d letras", i);
}
#endif // ex5

#ifdef ex6
main()
{
    char nome[30], sexo[2];
    int idade;
    printf("Digite seu Nome Completo: ");
    scanf("%[^\n]", nome);
    printf("Digite seu sexo.\nM - Para Masculino\tF - Para Feminino: ");
    scanf(" %s", sexo);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(sexo[0]=='F' && idade<25)
    {
        printf("%s\nACEITA.", nome);
    }else{
        printf("NÃO ACEITA.");
    }
}
#endif // ex6

#ifdef ex7
/*Crie um programa que compara duas strings
obs.:(n ˜ao use a func¸ ˜ao strcmp).*/
main()
{
    char str1[30],str2[30],resp;
    int contStr=0; //Contar caracteres da string
    for(;;)
    {
    printf("Digite a primeira string: ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);
    printf("Comparando...");
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i] == str2[i]) //compara A com B
        {
            contStr++; //Conta a qtd de caracteres semelhantes(mesma posição no vetor)
            printf("...");
        }
    }
    if(strlen(str2) == contStr)  //Compara se o tamanho da String(str2) tem o mesmo tamanho do contador (contStr)
    {
        printf("\nAs strings digitadas tem exatamente os mesmos caracteres .");
    }
    else
    {
        printf("\nAs strings possuem conteudo diferente.");
    }
    printf("\n\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N')
        break;
    system("cls");
    }
}
#endif // ex7

#ifdef ex8
main()
{
    char num[30];
    int i,cont=0;
    printf("Digite um numero qqlr com no maximo 30 digitos: ");
    scanf("%[^\n]", num);
    for(i=0;i<strlen(num);i++)
    {
        printf("%c", num[i]);
        if(num[i] == '1')
        {
            cont++;
        }
    }
    printf("\nA quantidade de 1's eh: %d", cont);
}
#endif // ex8

#ifdef ex9
main()
{
    char str[30];
    int i;
    printf("Digite uma sequencia de numeros: ");
    fgets(str,30,stdin);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='0')
        {
            str[i]='1';
        }
    }
    printf("\n%s", str);
}
#endif // ex9

#ifdef ex10
//Modelo 1(meu)
/*main()
{
	char str[30],contrario[30];
	int c;
	printf("Digite uma palavra: ");
	fgets(str,30,stdin);
	c = strlen(str) - 2;
	contrario[c+1]=0;
	for(int i=0;c  >= 0;i++,c--)
    {
		contrario[i]=str[c];
    }
	printf("%s\n",contrario);
}*/

//Modelo 2
/*main()
{
    char str[30], contrario[30];
    printf("Digite uma palavra: ");
    fgets(str, 30, stdin);
    int c = strlen(str) - 2; // primeiro indice a copiar
    contrario[c + 1] = 0;
    str[strlen(str) - 1] = 0;
    printf("\nValor recebido: '%s'\n", str);
    for (int  i = 0; c >= 0; i++, c-- )
        contrario[i] = str[c];
    printf("String ao contrario: '%s'\n\n", contrario);
}*/


//Modelo 3
main(){
    char str[30];
    int i = strlen(fgets(str,30,stdin))-1;

    while(i--){
        printf("%c",str[i]);
    }
}
#endif // ex10

#ifdef ex11
main()
{
    char str[30];
    printf("Digite uma string: ");
    fgets(str, 30, stdin);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            str[i]=' ';
        }
        else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            str[i]=' ';
        }
    }
    printf("String digitada: %s", str);
}
#endif // ex11

#ifdef ex12
main()
{
    char str[30],con;
    int contV=0;
    printf("Digite uma palavra: ");
    fgets(str, 30, stdin);
    printf("Digite uma vogal ou consoante: ");
    scanf(" %c", &con);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            contV++;
            str[i]=con;
        }
        else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            contV++;
            str[i]=con;
        }
    }
        printf("%d\n", contV);
        printf("%s\n", str);
}
#endif // ex12

#ifdef ex13
main()
{
    char frase[1001];
    int vazio=0;
    printf("Digite uma frase: ");
    fgets(frase, 1000, stdin);
    for(int i=0;frase[i]!='\0';i++)
    {
        if(frase[i]==' ')
        {
            vazio++;
        }
    }
    printf("Apareceu %d espacos em branco.", vazio);
}
#endif // ex13

#ifdef ex14
main()
{
    char palavra[50];
    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    fflush(stdin);
    for(int i=0; palavra[i]!='\0';i++)
    {
        printf("%d, ", palavra[i]+=1);// PASSA PRA TAB ASCII EM DECIMAL
    }
    printf("\n%s", palavra);
}
#endif // ex14

#ifdef ex15
main()
{

}
#endif // ex15
