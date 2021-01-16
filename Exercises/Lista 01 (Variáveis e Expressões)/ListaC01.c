#include <stdio.h>
#include <stdlib.h>

#define ex1

#ifdef ex1
//Imprimir um n�mero inteiro
void main(){

    int a;

    printf("Digite um numero inteiro: ");
    scanf("%i",&a);
    printf("O valor do numero e: %i", a);
}
#endif // ex1

#ifdef ex2
//Ler e imprimir um n�mero real.
void main(){

    float a;

    printf("Digite um numero real: \n");
    scanf("%f", &a);
    printf("O numero digitado foi: %f\n", a);

}
#endif // ex3

#ifdef ex3
//imprimir o calculo de 3 numeros inteiros
void main(){

    int a,b,c,soma;

    printf("Digite 3 numeros sucessivamente e veja a soma deles: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    soma = a+b+c;
    printf("A soma dos 3 valores e: %d", soma);
}
#endif // ex3

#ifdef ex4
//imprime o quadrado de um numero
void main(){

    int a,b;

    printf("Digite um numero: ");
    scanf("%d",&a);
    b = a*a;
    printf("O quadrado desse numero e: %d", b);

}
#endif // ex4

#ifdef ex5
//imprimir 1/5 do n�mero digitado
main(){

    float a, divisao;

    printf("Digite um numero e veja a quinta parte dele: ");
    scanf("%f", &a);

    divisao = a / 5;

    printf("A quinta parte desse numero e: %.2f", divisao);

}
#endif // ex5

#ifdef ex6
void main(){

    float C, F;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = C * 1.8 + 32.0;
    //F = ((C*9)/5)+32; //OUTRA FORMULA

    printf("O valor em Fahrenheit eh: %.2f\n", F);
}
#endif // ex6

#ifdef ex7
//converte um valor de fahrenheit para celsius
void main (){

    float C, F;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = 5.0 * (F - 32.0)/9.0;

    printf("A temperatura em Celsius e: %.2f\n", C);
    system ("pause");
}
#endif // ex7

#ifdef ex8
void main(){

    float k, c;

    printf("DIgite uma emperatura em Kevin: ");
    scanf("%f", &k);

    c = k - 273.15;

    printf("A temperatura em Celsius: %.2f\n", c);
    system("pause");
}
#endif // ex8

#ifdef ex9
void main(){

    float k, c;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &c);

    k = c + 273.15;

    printf("A temperatura em Kevin e de: %.2f\n", k);
    system("pause");
    printf("________________________________________\n");
}
#endif // ex9

#ifdef ex10
main(){

    float k, m;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &k);

    m = k/3.6;

    printf("A velocidade em metros por segundo eh de: %.2f", m);
}
#endif // ex10

#ifdef ex11
main()
{

}
#endif // ex11

#ifdef ex12
main(){
    float m, k;
    printf("Digite uma distancia em milhas: ");
    scanf("%f", &m);
    k = 1.61 * m;
    printf("A distancia digitada convertida em kilometros eh: %.2f\n", k);
    system("pause");
}
#endif // ex12

#ifdef ex13
main(){
    float k, m;
    printf("Digite a distancia em kilometros: ");
    scanf("%f", &k);
    m = k / 1.61;
    printf("A distancia digitada convertida em milhas eh: %.2f\n", m);
    }
#endif // ex13

#ifdef ex14
main(){
    float G, R;

    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &G);
    R =  ( G * 3.14 )  / 180;
    printf("\nO valor do angulo em graus convertido para radianos eh de: %.2f\n", R);
    system("\npause");
}
#endif // ex14

#ifdef ex15
main(){
    float R, G;

    printf("Digite o valor do angulo em Radianos: ");
    scanf("%f", &R);
    G =  ( R * 180 )  / 3.14;
    printf("\nO valor do angulo em Radianos convertido para Graus eh de: %.2f\n", G);
    system("\npause");
}
#endif // ex15

#ifdef ex16
main(){
    float P, C;
    printf("Digite o valor em polegadas: ");
    scanf("%f", &P);
    C = P * 2.54;
    printf("\nO valor que voce digitou convertido em centimetros eh de: %f\n", C);
    system("pause");
}
#endif // ex16

#ifdef ex17
main(){
    float P, C;
    printf("Digite o valor em centimetros: ");
    scanf("%f", &C);
    P = C / 2.54;
    printf("O valor que voce digitou convertido em Polegadas eh de: %f\n\n", P);
    system("pause");
}
#endif // ex17

#ifdef ex18
main(){
    float m, l;
    printf("Digite o valor desejado em metros cubicos: ");
    scanf("%f", &m);
    l = 1000 * m;
    printf("O valor convertido em Litros: %f\n", l);
    system("pause");
}
#endif // ex18

#ifdef ex19
main(){
    float m, l;
    printf("Digite o valor desejado em litros: ");
    scanf("%f", &l);
    m = l / 1000;
    printf("O valor convertido em metros cubicos eh: %f\n", m);
    system("pause");
}
#endif // ex19

#ifdef ex20
main(){
    float kg, l;
    printf("Digite o valor desejado em quilogramas: ");
    scanf("%f", &kg);
    l = kg / 0.45;
    printf("O valor digitado em libras eh de: %f\n", l);
    system("pause");
}
#endif // ex20

#ifdef ex21
main(){
    float kg, l;
    printf("Digite o valor desejado em libras: ");
    scanf("%f", &l);
    kg = l * 0.45;
    printf("O valor digitado em quilogramas eh de: %.2f\n", kg);
    system("pause");
}
#endif // ex21

#ifdef ex22
main(){
    float j, m;
    printf("Digite o valor desejado em jardas: ");
    scanf("%f", &j);
    m = j * 0.91;
    printf("O valor digitado em metros eh de: %.2f\n", m);
    system("pause");
}
#endif // ex22

#ifdef ex23
main(){
    float j, m;
    printf("Digite o valor desejado em metros: ");
    scanf("%f", &m);
    j = m * 1.094;
    printf("O valor digitado em Jardas eh de: %.2f\n", j);
    system("pause");
}
#endif // ex23

#ifdef ex24
main(){
    float a, m;
    printf("Digite o valor desejado em metros quadrados: ");
    scanf("%f", &m);
    a = m*0.000247;
    printf("O valor digitado em metros eh de: %.3f\n", a);
    system("pause");
}
#endif // ex24

#ifdef ex25
main(){
    float m, a;
    printf("Digite o valor desejado em acres: ");
    scanf("%f", &a);
    m = a * 4047;
    printf("O valor digitado em metros eh de: %.3f\n", m);
    system("pause");
}
#endif // ex25

#ifdef ex26
main(){
    float h, m;
    printf("Digite o valor desejado em metros quadrados: ");
    scanf("%f", &m);
    h = m * 0.0001;
    printf("O valor digitado em hectares eh de: %.1f\n", h);
    system("pause");
}
#endif // ex26

#ifdef ex27
main(){
    float h, m;
    printf("Digite o valor desejado em hectares: ");
    scanf("%f", &h);
    m = h * 10000;
    printf("O valor digitado em metros quadrados eh de: %.1f\n", m);
    system("pause");
}
#endif // ex27

#ifdef ex28
main(){
    int a, b, c, soma;

    printf("Digite tres numeros qualquer: ");
    scanf("%d%d%d", &a, &b, &c);
    a = a*a;
    b = b*b;
    c = c*c;
    soma = a + b + c;
    printf("A soma dos quadrados desses numeros eh %d", soma);
}
#endif // ex28

#ifdef ex29
main(){
    float a, b, c, d, media;
    printf("Digite as quatro notas: ");
    scanf("%f%f%f%f", &a, &b, &c, &d);

    media = (a+b+c+d) / 4;

    printf("A media das suas notas eh = %.2f", media);
}
#endif // ex29

#ifdef ex30
main(){
    float r, d;
    printf("Digite o valor em real: ");
    scanf("%f", &r);
    d = r / 5.11;
    printf("O valor digitado em dolar americano eh de %f\n", d);
    system("pause");
}
#endif // ex30

#ifdef ex31
main(){
    int num, suc, ant;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    suc = num + 1;
    ant = num - 1;
    printf("O sucessor desse numero eh %d, e o antecessor eh %d\n", suc, ant);
    system("pause");
}
#endif // ex31

#ifdef ex32
main(){
    int num, t, d, soma;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    t = num * 3;
    d = num * 2;
    soma = (t + 1)+(d - 1);
    printf("A soma do sucessor do triplo de %d\ncom o antecessor do dobro deste mesmo numero eh: %d\n", num, soma);
    system("pause");
}
#endif // ex32

#ifdef ex33
int main (){

	float num, A;
	printf("Digite um lado do quadrado: ");
	scanf("%f", &num);
	A = num * num;
	printf("A area desse quadrado serah: %f\n", A);
	system("pause");
}
#endif // ex33

#ifdef ex34
main(){

    float r, c;

    printf("Digite o valor do raio de um circulo: ");
    scanf("%f", &r);
    c = 3.141592 * (r * r);
    printf("O valor da area do circulo serah %f\n", c);
    getch();
}
#endif // ex34

#ifdef ex35
main(){
    float A, B, H;
    printf("Digite o primeiro cateto: ");
    scanf("%f", &A);
    printf("Digite o segundo cateto: ");
    scanf("%f", &B);
    H = pow(A, 2) + pow(B, 2);
    printf("O valor eh %.2f\n", sqrt(H));
    system("pause");
}
#endif // ex35

#ifdef ex36
main()
{
    float h, raio, area=0;
    printf("Digite o valor do raio de um c�rculo: ");
    scanf("%f", &raio);
    printf("Digite o valor do raio de um c�rculo: ");
    area=(raio*raio)*3.141;
    printf("A area do circulo eh %.2f ", area);
}
#endif // ex36

#ifdef ex37
main()
{
    float preco;
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    printf("O valor do produto com desconto eh %.2f", preco-(preco*0.12));
}
#endif // ex37

#ifdef ex38
main()
{
    float sal;
    printf("Digite seu salario: ");
    scanf("%f", &sal);
    printf("O seu aumento foi de 25 porcento = %f ", sal+(sal*0.25));
}
#endif // ex38

#ifdef ex39
main()
{
    float premio=780000, resto=0;
    printf("O primeiro ganhador receberah %.2f\n", premio*0.46);
    printf("O segundo ganhador receberah %.2f\n", premio*0.32);
    resto=premio-((premio*0.46)+(premio*0.32));
    printf("O terceiro ganhador receberah %.2f", resto);
}
#endif // ex39

#ifdef ex40
main()
{
    int dia,total=0;
    float ;
    printf("Digite a qtd de dias trabalhados pelo encanador: ");
    scanf("%d", &dia);
    total=dia*30;
    total=(total*0.08)+total;
    printf("O qtia liquida a ser paga: %d", total);
}
#endif // ex40

#ifdef ex41
main()
{
    float valor,hora,total=0;
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor);
    printf("Horas trabalhadas no mes: ");
    scanf("%f", &hora);
    total=(valor*hora);
    total=(total*0.10)+total;
    printf("O valor a ser pago serah %.2f", total);
    getch();
}
#endif

#ifdef ex42
main()
{
    float sal,total=0;
    printf("Digite o valor do salario: ");
    scanf("%f",&sal);
    total=(sal*0.05)+sal;
    total=total-(sal*0.07);
    printf("O salario a receber serah %.2f", total);
}
#endif // ex42

#ifdef ex43
main()
{
    float total,desconto;
    printf("Digite o valor total: ");
    scanf("%f",&total);
    desconto=total-(total*0.10);
    printf("O total a pagar com 10desconto: %f\n", desconto);
    printf("Parcelamento de 3x s/ juros de %.2f\n", total/3);
    printf("Comissao a vista 5porcento (a vista): %.2f\n", (desconto*0.05));
    printf("Comissao a vista 5porcento (parcelado): %.2f\n", (total*0.05));
}
#endif // ex43

#ifdef ex44
main()
{
    float degrau,h,subindo=0;
    int i;
    printf("Digite a altura do degrau em metros: ");
    scanf("%f", &degrau);
    printf("Qual altura deseja alcancar em metros: ");
    scanf("%f", &h);
    for(i=0;h>subindo;i++)
    {
        subindo+=degrau;
        printf("%f\n",subindo);
    }
    printf("Voce terah que subir %d degrais.", i);
}
#endif // ex44

#ifdef ex45
main()
{
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c",&letra);
    printf("%c", letra+32);
}
#endif // ex45

#ifdef ex46
main()
{
int i, j;
char num[3], numInvertido[3];

printf("Digite o numero: ");
gets(num);

    for(i = 0, j = 2; i < 3; i++, j--)
    {
        numInvertido[j] = num[i];
    }

    for(i = 0; i < 3; i++)
    {
        printf("%c", numInvertido[i]);
    }
}
#endif // ex46

#ifdef ex47
main()
{
    char x[4];
    printf("Digite um numero inteiro: ");
    gets(x);
    for(int i=0;i<4;i++)
    {
        printf("%c\n", x[i]);
    }
}
#endif // ex47

#ifdef ex48
/*  Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/
main()
{
    int tempo, horas, minutos, segundos;
    printf("Digite o tempo: ");
    scanf("%d", &tempo);
    horas=tempo/3600; //3600 representa 1h
    minutos=(tempo-(horas*3600))/60; //subtrai o numero de horas e multiplica por 60
    segundos=(tempo-(horas*3600+(minutos*60)));
    printf("%dh %dm %ds", horas, minutos, segundos);
}
#endif // ex48

#ifdef ex49
/*Fac�a um programa para leia o hor� ario (hora, minuto e segundo) de inicio e a durac� �ao, em
segundos, de uma experi �encia biol � ogica. O programa deve resultar com o novo hor � ario
(hora, minuto e segundo) do termino da mesma.*/
main()
{

}
#endif

#ifdef ex50
/*Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual.*/
main()
{
    int age,present;
    printf("Digte sua idade: ");
    scanf("%d", &age);
    printf("Digite o ano atual: ");
    scanf("%d",&present);
    printf("Voce nasceu em %d.",present-age);
}
#endif

#ifdef ex51
/*Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
dist �ancia da origem (0; 0).*/
main()
{

}
#endif
