#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ex20

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
/*Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto e, domingo se 1, segunda-feira se 2, e
assim por diante.*/
main()
{
    int opc=0;
for(;;)
{
    printf("Digite um numero entre 1 e 7: ");
    scanf("%d",&opc);
    switch(opc)
    {
        case 1:
        {
            printf("Domingo\n");
            break;
        }
        case 2:
        {
            printf("Segunda-feira\n");
            break;
        }
        case 3:
        {
            printf("Terca-feira\n");
            break;
        }
        case 4:
        {
            printf("Quarta-feira\n");
            break;
        }
        case 5:
        {
            printf("Quinta-feira\n");
            break;
        }
        case 6:
        {
            printf("Seta-feira\n");
            break;
        }
        case 7:
        {
            printf("Sabado\n");
            break;
        }
        default:
        {
            printf("Digitado incorretamente.\n");
            break;
        }
    }
    if(opc <=7)
    {
        break;
    }
}
}
#endif // ex15

#ifdef ex16
/*16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mˆes
correspondente a este numero. Isto ´ e, janeiro se 1, fevereiro se 2, e assim por diante.*/
main()
{
    int opc=0;
    printf("Digite um numero entre 1 e 12: ");
    scanf("%d",&opc);
    switch(opc)
    {
        case 1:
        {
            printf("Janeiro\n");
            break;
        }
        case 2:
        {
            printf("Fevereiro\n");
            break;
        }
        case 3:
        {
            printf("Marco\n");
            break;
        }
        case 4:
        {
            printf("Abril\n");
            break;
        }
        case 5:
        {
            printf("Maio\n");
            break;
        }
        case 6:
        {
            printf("Junho\n");
            break;
        }
        case 7:
        {
            printf("Julho\n");
            break;
        }
        case 8:
        {
            printf("Agosto\n");
            break;
        }
        case 9:
        {
            printf("Setembro\n");
            break;
        }
        case 10:
        {
            printf("Outubro\n");
            break;
        }
        case 11:
        {
            printf("Novembro\n");
            break;
        }
        case 12:
        {
            printf("Dezembro\n");
            break;
        }
        default:
        {
            printf("Digitado incorretamente.\n");
            break;
        }
    }
}
#endif // ex16

#ifdef ex17
/*Fac¸a um programa que calcule e mostre a ´area de um trap´ezio. Sabe-se que:
A =
(basemaior + basemenor)*altura / 2
Lembre-se a base maior e a base menor devem ser n´umeros maiores que zero.*/
int main()
{
    float b,B,a,area;
    printf("Digite a Base Menor: ");
    scanf("%f",&b);
    printf("Digite a Base Maior: ");
    scanf("%f",&B);
    printf("Digite a Altura: ");
    scanf("%f",&a);
    if(b > 0 && B > 0)
    {
        area = ((B+b)*a)/2;
        printf("A area do trapezio eh %.2f", area);
    }else
    {
        printf("Dados Incorretos");
    }

    return 0;
}
#endif

#ifdef ex18
/**/
int main()
{
    int a,b;
    char opc;

    printf("Digte um numero: ");
    scanf("%d",&a);
    printf("Digte outro numero: ");
    scanf("%d",&b);
    printf("DIGITE UMA OPERACAO: +, -, * OU /\nCOMANDO: ");
    scanf(" %c", &opc);
    switch(opc)
    {
        case '+':
        {
            printf("A soma desses dois numeros eh: %d", a+b);
            break;
        }
        case '-':
        {
            printf("A subtracao desses dois numeros eh: %d", a-b);
            break;
        }
        case '*':
        {
            printf("A multiplicacao desses dois numeros eh: %d", a*b);
            break;
        }
        case '/':
        {
            printf("A divisao desses dois numeros eh: %f", (float)a/b);
            break;
        }
        default:
        {
            printf("COMANDO NAO RECONHECIDO");
            break;
        }
    }
}
#endif // ex18

#ifdef ex19
/*Faca um programa para verificar se um determinado numero inteiro e divisıvel por 3 ou
5, mas n˜ao simultaneamente pelos dois.*/
main()
{
    int a;
    printf("Digite um numero inteiro: ");
    scanf("%d",&a);
    if(a % 3 == 0){
    printf("O numero %d eh divisivel por 3.\n",a);
    }else
    if(a % 5 == 0){
    printf("O numero %d eh divisivel por 5.\n",a);
    }else
    {
        printf("Nao eh divisil nem por 3 nem por 5.");
    }
}
#endif // ex19

#ifdef ex20
/*Dados tr ˆes valores, A, B, C, verificar se eles podem ser valores dos lados de um tri ˆangulo
e, se forem, se ´e um tri ˆangulo escaleno, equil ´atero ou is ´oscele, considerando os seguintes
conceitos:
 O comprimento de cada lado de um tri ˆangulo ´e menor do que a soma dos outros
dois lados.
 Chama-se equilatero o triangulo que tem trˆes lados iguais.
 Denominam-se is´osceles o triˆangulo que tem o comprimento de dois lados iguais.
 Recebe o nome de escaleno o triˆangulo que tem os trˆes lados diferentes.*/
int main()
{
    int A, B, C;
    printf("Digite o primeiro lado: ");
    scanf("%d",&A);
    printf("Digite o segundo lado: ");
    scanf("%d",&B);
    printf("Digite o terceiro lado: ");
    scanf("%d",&C);
    if(A<B+C && B<C+A && C<A+B)
    {
        if(A == B && B == C)
        {
            printf("O triangulo eh um Equilatero.");
        }else
        if(A == B || B == C || A == C)
        {
            printf("O triangulo eh Isosceles.");
        }else
        if(A != B && B != C && A != C)
        {
            printf("O triangulo eh Escaleno.");
        }
    }else
    {
        printf("Os lados digitados nao representam um triangulo.");
    }
    return 0;
}
#endif // ex20

#ifdef
