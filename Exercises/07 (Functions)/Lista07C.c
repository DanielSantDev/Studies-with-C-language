#include<stdio.h>
#include<stdlib.h>

#define ex10

#ifdef ex1
main()
{
    int num;
    printf("Digite um numero ");
    scanf("%d", &num);
    printf("O dobro de %d eh %d.", num, dobro(num));
}

int dobro(int x)
{
    int dobro=0;
    dobro= x * x;
    return dobro;
}
#endif // ex1

#ifdef ex2
void DataAtual(int dia, int mes, int ano);

int main(void){
	int dia, mes, ano;

	printf("Dia:\n");
	scanf("%i", &dia);

	//limpa o buffer de entrada.
	while(getchar() != '\n');

	printf("Mes:\n");
	scanf("%i", &mes);

	while(getchar() != '\n');

	printf("Ano:\n");
	scanf("%i", &ano);

	DataAtual(dia, mes, ano);

	return 0;
}

void DataAtual(int dia, int mes, int ano){
	const char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril",
                               "Maio", "Junho", "Julho", "Agosto",
                               "Setembro", "Outubro", "Novembro", "Dezembro"};

	printf("A data eh: %i de %s de %i\n", dia, meses[mes - 1], ano);
}
#endif // ex2

#ifdef ex3
int pone(int x);

main()
{
    int num;
    printf("Digite um numero qlqr: ");
    scanf("%d", &num);
    printf("%d", pone(num));
}

int pone(int x)
{
    if(x < 0)
    {
        printf("Esse numero eh negativo.\n");
        return -1;
    }
    else if(x > 0)
    {
        printf("O numero eh positivo.\n");
        return 1;
    }
    else
    {
        printf("O valor eh nulo.\n");
        return 0;
    }

}
#endif // ex3

#ifdef ex4 //Undone
main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("%d", quadrado(num));
}

int quadrado(int x)
{
    if(x < 0)
    {
        das
    }
    else if(x*x == )
}
#endif // ex4

#ifdef ex10
int maior(int x, int y);

main()
{
    int a, b;
    printf("Digite um numero qlqr: ");
    scanf("%d", &a);
    printf("Digite outro numero qlqr: ");
    scanf("%d", &b);
    maior(a,b);
}

int maior(int x, int y)
{
    if(x > y)
    {
        printf("%d eh maior que %d.", x, y);
    }
    else if(y > x)
    {
        printf("%d eh maior que %d.", y, x);
    }
    else
    {
        printf("Os valores sao iguais.");
    }
    return;
}
#endif // ex10
