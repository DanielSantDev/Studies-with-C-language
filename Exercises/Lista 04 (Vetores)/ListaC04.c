#include<stdio.h>
#include<stdlib.h>

#define ex1

#ifdef ex1 //Done
main()
{
    int A[6]={1,0,5,-2,-5,7}, soma=0;

    soma=A[0]+A[1]+A[5]; // A[5]representa == 7, pois 5 eh a ultima posição do vetor
    printf("A soma das posicoes 0, 1 e 5 eh %d\n", soma);
    system("pause");
    system("cls");
    A[4]=100;
        for(int i=0;i<6;i++)
    {
        printf("Vetor[%d] == %d \n", i, A[i]);
    }
}
#endif // ex1

#ifdef ex2 //Done
main()
{
    int X[6], i;
    for(i=0;i<=5;i++)
    {
        printf("Digite o valor a ser armazenado na posicao %d\n", i);
        scanf("%d", &X[i]);
    }
    for(i=0;i<=5;i++)
    {
        printf("Vetor[%d] == %d\n", i, X[i]);
    }
}
#endif // ex2

#ifdef ex3 //Done
main()
{
    float x[10],y[10]={};
    int i;
    printf("Digite os 10 componentes do conjunto X: ");
    for(i=0;i<=9;i++)
    {
        scanf("%f", &x[i]);
        y[i]=x[i]*x[i];
    }
    for(i=0;i<=9;i++)
    {
        printf("VetorX[%.2f]\tQuadrado[%.2f]\n", x[i], y[i]);
    }
}
#endif // ex3

#ifdef ex4 //Done
main()
{
int i, A[8], x, y, soma=0;
    for(i=0;i<=7;i++)
    {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d",&A[i]);
    }
    printf("Digite duas posições desse vetor: ");
    scanf("%d%d", &x, &y);
    soma=A[x]+A[y];
    system("cls");
    printf("A soma dos valores encontrados nas respectivas posicoes eh %d", soma);
}
#endif // ex4

#ifdef ex5 //Done
main()
{
    int i, A[10], contpar=0;
    for(i=0;i<=9;i++)
    {
        printf("Digite um valor para o Vetor[%d]: ", i);
        scanf("%d",&A[i]);
        if(A[i]%2==0)
        {
            contpar++;
        }
    }
    printf("Dentro do vetor digitado possui apenas %d numeros pares.", contpar);
}
#endif // ex5

#ifdef ex6
main()
{

}
#endif // ex6
