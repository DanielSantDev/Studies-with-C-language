#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex20

#ifdef ex1
main()
{
    int t=3;
    for(int x=0;x<5;x++){printf("%d, ",t);
        t=t+3;}
}
#endif // ex1

#ifdef ex2
main()
{
    int i;
    for(i=1;i<101;i++){printf("%d, ",i);}system("pause");i=1;
    while(i<101){printf("%d, ", i);i++;}system("pause");i=1;
    do{printf("%d, ",i);i++;}while(i<101);
    system("pause");
}
#endif // ex2

#ifdef ex3
main()
{
    int x=10;
    while(x>=0){printf("%d, ", x);x=x-1;}
    printf("\nFIM!");
}
#endif // ex3

#ifdef ex4
main()
{
    for(int i=0;i<=100000;i+=1000){printf("%d, ",i);}
}
#endif // ex4

#ifdef ex5
main()
{
    int i,x,t=0;
    for(i=1;i<11;i++)
    {
        printf("Digite o %d valor: ", i);
        scanf("%d", &x);
        t=t+x;
    }
    printf("O total eh: %d", t);
}
#endif // ex5

#ifdef ex6
main()
{
    int i;
    float t=0, x;
    for(i=1;i<11;i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%f", &x);
        t=t+x;
    }
    printf("A media desses numeros eh %.2f", t/10);
}
#endif // ex6

#ifdef ex7
main()
{
    int i;
    float t=0, x;
    for(i=1;i<11;i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%f", &x);
        if(x>0){t=t+x;}
    }
    printf("A media desses numeros eh %.2f", t/10);
}
#endif // ex7

#ifdef ex8
main()
{
    int i,x,maior=0,menor=100000;
    for(i=0;i<10;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);
        if(x>maior){maior=x;}
        if(x<menor){menor=x;}
    }
    printf("O maior numero eh %d\nE o menor numero eh %d", maior, menor);
}
#endif // ex8

#ifdef ex9
main()
{
    int x,i,contimpar=0;
    printf("Digite um numero inteiro: ");
    scanf("%d",&x);
    for(i=1;x!=contimpar;i++)
    {
        if(i%2==1)
        {
            printf("%d, ",i);
            contimpar++;
        }
    }
}
#endif // ex9

#ifdef ex10
main()
{
    int x=100,i,soma=0;
    printf("SOMA DOS 50 PRIMEIROS NUMEROS NATURAIS PARES...");
    for(i=0;i<=x;i++)
    {
      if(i%2==0)
      {
            printf("%d, ",i);
            soma+=i;
      }
    }
    printf("\nA SOMA DOS 50 PRIMEIROS NUMEROS NATURAIS PARES EH %d",soma);
}
#endif // ex10

#ifdef ex11
main()
{
    int x=0;
    while(x<=0)
    {
        printf("Digite  um numero inteiro postivo: ");
        scanf("%d", &x);
    }
    for(int i=0;i<=x;i++)
    {
        printf("%d, ",i);
    }
}
#endif // ex11

#ifdef ex12
main()
{
    int x=0;
    while(x<=0)
    {
        printf("Digite  um numero inteiro postivo: ");
        scanf("%d", &x);
    }
    for(int i=x;i>=0;i--)
    {
        printf("%d, ", i);
    }
}
#endif // ex12

#ifdef ex13
main()
{
    int x,i;
    do
    {
        printf("Digite um numero inteiro par: ");
        scanf("%d", &x);
    }while(x%2==1);
    for(i=0;i<=x;i++)
    {
        if(i%2==0)
        {
            printf("%d, ",i);
        }
    }
}
#endif // ex13

#ifdef ex14
main()
{
    int x,i;
    do
    {
        printf("Digite um numero inteiro par: ");
        scanf("%d", &x);
    }while(x%2==1);
    for(i=x;i>=0;i--)
    {
        if(i%2==0)
        {
            printf("%d, ",i);
        }
    }
}
#endif // ex14

#ifdef ex15
main()
{
        int x,i;
    do
    {
        printf("Digite um numero inteiro par: ");
        scanf("%d", &x);
    }while(x%2==0);
    for(i=0;i<=x;i++)
    {
        if(i%2==1)
        {
            printf("%d, ",i);
        }
    }
}
#endif // ex15

#ifdef ex16
main()
{
    int x,i;
    do
    {
        printf("Digite um numero inteiro par: ");
        scanf("%d", &x);
    }while(x%2==0);
    for(i=x;i>=0;i--)
    {
        if(i%2==1)
        {
            printf("%d, ",i);
        }
    }
}
#endif // ex16

#ifdef ex17
main()
{
    int n,i,soma=0;
    printf("Digite um numro inteiro positivo: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        if(i>=0)
        {
        printf("%d, ", i);
        soma+=i;
        }
    }
    printf("\nA SOMA DOS N PRIMEIROS NUMEROS NATURAIS EH: %d", soma);
}
#endif

#ifdef ex18
main()
{
    int x=0,i,num[],contmaior;
    while(x<=0);
    {printf("Digite a qtd de elementos: ");
    scanf("%d", &x);}

    for(i=0;i<=x;i++)
    {
        printf("Digite o numero desejado: ");
        scanf("%d", &num[i]);
    }
}
#endif // ex18

#ifdef ex19
main()
{
    char str[15];
    int i;
    printf("Digite um nome: ");
    scanf("%[^\n]", str);
    for(i=0;i<strlen(str);i++)
    {
        printf("O valor do elemento %d da string = %c\n",i,str[i]);
    }
}
#endif // ex19

#ifdef ex20
int main(void)
{
  printf("\n****** Verificando a localidade corrente ********\n\n");
  printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
  printf("Não é possível usar acentuação ou ç corretamente…\n\n");
  
  printf("\n****** Alterando para a localidade do sistema ********\n\n");
  
  //alterando para o padrão do sistema operacional
  printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));
  printf("Agora não tem mais problema algum!\n");
  printf("Já posso usar acentuação e também o caracter ç…\n\n\n");
  
  system("pause");
  return 0;
}
#endif