#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ex15

#ifdef ex1
main(){
    int num1, num2;
    printf("Digite um numero qualquer: ");
    scanf("%d", &num1);
    printf("Digite um outro numero qualquer: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O numero %d eh maior que %d.\n", num1, num2);
    }else if(num2 > num1){
        printf("O numero %d eh maior que %d.\n", num2, num1);
    }else{
        printf("Os numeros digitados sao iguais.\n");
    }
    system("pause");
}
#endif

#ifdef ex2
//Raiz Quadrada
main(){
    float A;
    printf("Digite um numero: ");
    scanf("%f", &A);

    if(A < 0){
        printf("Esse numero eh invalido, pois eh negativo.");
    }else{
        printf("A raiz desse numero eh: %.2f\n", sqrt(A));
    }
    system("pause");
}
#endif

#ifdef ex3
main()
{
    float x;
    printf("Digite um numero real: ");
    scanf("%f", &x);
    if(x>0)
    {
        printf("A raiz desse numero eh: %.2f", sqrt(x));
    }else{printf("Esse numero ao quadrado eh: %f", x*x);}

}
#endif // ex3

#ifdef ex4
main()
{
    float x;
    printf("Digite um numero real: ");
    scanf("%f", &x);
    if(x>0)
    {
        printf("A raiz desse numero eh: %.2f\n", sqrt(x));
        printf("Esse numero ao quadrado eh: %.2f", x*x);
    }
}
#endif // ex4

#ifdef ex5
main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if(x%2==0)
    {
        printf("O numero eh par.");
    }else{printf("Esse numero eh impar.");}
}
#endif // ex5

#ifdef ex6
main()
{
    int x,y,z=0;
    printf("Digite dois numeros qualquer: ");
    scanf("%d%d", &x, &y);
    if(x>y)
    {
        printf("o numero %d eh maior.\n", x);
    }else{printf("O numero maior eh %d\n", y);}
    printf("A diferença entre esses numeros eh: %d", x-y);
}
#endif // ex6

#ifdef ex7
main()
{
    int x,y;
    printf("Digite dois numeros: ");
    scanf("%d%d", &x, &y);
    if(x>y)
    {
        printf("O numero %d eh maior.", x);
    }else if(x<y){
        printf("O numero %d eh maior.", y);
    }else{printf("Os numeros sao iguais.");}
}
#endif // ex7

#ifdef ex8
main()
{
    float x,y;
    printf("Digite as duas notas: ");
    scanf("%f%f", &x, &y);
    if((x<0 || x>10) || (y<0 || y>10))
    {
        printf("Valor incorreto.");
    }else{printf("As notas sao validas.\nA media das notas eh: %.2f",(x+y)/2);}
}
#endif // ex8

#ifdef ex9
main()
{
    float sal, eptmo;
    printf("Digite o valor do seu salarioh: ");
    scanf("%f", &sal);
    printf("Digite o valor do emprestismo desejado: ");
    scanf("%f", &eptmo);
    if(eptmo>(sal*0.2))
    {
        printf("Emprestimo nao concedido.");
    }else{printf("Emprestimo concedido.");}
}
#endif // ex9

#ifdef ex10
main()
{
    float h, pideal=0;
    char sexo;
    printf("Qual sua altura: ");
    scanf("%f",&h);
    printf("Digite seu sexo:\n");
    printf("H - Para Homem\nM - Para Mulher:\n");
    scanf(" %c",&sexo);
    if(sexo == 'H')
    {
        pideal=(72.7*h)-58;
        printf("Seu peso ideal eh de %f Kg",pideal);
    }
    else if(sexo == 'M')
    {
        pideal=(62.1*h)-44.7;
        printf("Seu peso ideal eh de %f Kg",pideal);
    }
    else
    {
        printf("\nERRO! Voce nao digitou corretamente.");
    }
}
#endif // ex10

#ifdef ex11
main()
{
    int num=0,soma=0;
    while(num<=0){
    printf("Digite um numero interio: ");
    scanf("%d", &num);
    }if(num<=0)
    {printf("Numero invalido.");}
    for(int i=0;num>0;i++)
    {
        soma+=num%10; //Pega o resto da divisao por 10 e soma, assim incrementando os numeros em sequencia
        num=num/10;
        printf("Calculando... %dnum\t%dsoma\n", num, soma);
    }
    printf("O total do valor calculado serah %d", soma);
}
#endif // ex11

#ifdef ex12
main()
{
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    if(num<0)
    {printf("Numero invalido");}
    else
    {
        printf("Logaritmo = %f\n", log(num));
        printf("Logaritmo base 10 = %f", log10(num));
    }
}
#endif // ex12

#ifdef ex13
main()
{
    float media,n1,n2,n3;
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite a segunda nota: ");
    scanf("%f",&n3);
    media=(((n1*1)+(n2*1)+(n3*2))/4); //Divide por 4, pois a N3 tem valor 2
    if(media<60)
    {
        printf("Sua media eh %.2f\nVoce foi reprovado.", media);
    }
    else
    {
        printf("Sua media eh %.2f\nVoce foi aprovado.", media);
    }
}
#endif // ex13

#ifdef ex14
main()
{
    float media,n1,n2,n3;
    printf("Digite a primeira nota do trabalho de laboratorio: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota da avaliacao semestral: ");
    scanf("%f",&n2);
    printf("Digite a terceira nota do Exame Final: ");
    scanf("%f",&n3);
    media=(((n1*2)+(n2*3)+(n3*5))/10); //Divide por 10, pois é a qtd de termos
    if(media<3)
    {
        printf("Sua media eh %.2f\nVoce foi reprovado.", media);
    }
    else if(media>=3 && media<=4.9)
    {
        printf("Sua media eh %.2f\nVoce estah de recuperacao.", media);
    }
    else
    {
        printf("Sua media eh %.2f\nVoce foi aprovado.", media);
    }
}
#endif // ex14

#ifdef ex15
main()
{

}
#endif // ex15
