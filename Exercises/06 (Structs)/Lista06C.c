#include <stdio.h>
#include <conio.h>
#include <string.h>


#define ex101


#ifdef ex100
/*Defina uma struct para tratar de alunos. Dentro dessa struct, crie uma vari�vel para armazenar
o nome do aluno, e outras para armazenar as notas de Matem�tica, F�sica e a m�dia dessas duas notas.
Ap�s definir a struct, crie tr�s vari�veis do tipo struct que voc� criou.Preencha os nomes e notas
dos alunos, calculando automaticamente a m�dia deles. Depois exiba tudo isso.*/
// BLOCO DE VARI�VEIS QUE SER�O USADAS PARA OS MESMOS FINS
// UTILIZA-SE UMA STRUCT QUANDO VOCE PRECISA ARMAZENAR DIVERSOS DADOS RELATIVOS A UMA �NICA COISA
main()
{
    struct ficha_aluno
    {
        char nome[30];
        float fisi, mate, media;
    };
    struct ficha_aluno aluno[5]; //Define a Struct em uma vari�vel

    printf("\n---------- Cadastro de aluno -----------\n\n\n");
    for(int i=0; i<5; i++)
    {
        fflush(stdin);
    printf("------- Digite o seu nome: ");
    fgets(aluno[i].nome, 30, stdin);
    printf("------- Digite sua nota de matematica: ");
    scanf("%f", &aluno[i].mate);
    printf("------- Digite a sua nota de fisica: ");
    scanf("%f", &aluno[i].fisi);
    aluno[i].media = (aluno[i].mate+aluno[i].fisi)/2;
    }
    printf("\n---------- NOTAS DOS ALUNOS -----------\n\n\n");
    for(int i=0; i<5; i++)
    {
    printf("------- %s", aluno[i].nome);
    printf("------- Sua nota de fisica eh %f\n", aluno[i].fisi);
    printf("------- Sua nota de matematica eh %f\n", aluno[i].mate);
    printf("------- Sua media eh de %f\n", aluno[i].media);
    }
}
#endif

#ifdef ex101

#endif // ex2

#ifdef ex2
int main(void)
{
    typedef int meuInteiro;
    typedef char String[20];

    meuInteiro numero = 1;
    String nome;
    scanf("%[^\n]s", nome);

    printf("A variavel do tipo 'meuInteiro' eh um int e vale %d\n", numero);
    printf("Ja a variavel 'nome' eh uma String e armazena \"%s\"\n", nome);

    return 0;
}
#endif // ex2
