#include <stdio.h>
#include <stdlib.h>

#define ex1

#ifdef ex1
/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as vari ´aveis aos ponteiros (use &). Modifique os valores de
cada vari ´avel usando os ponteiros. Imprima os valores das vari ´aveis antes e ap´os a
modificac¸ ˜ao.*/
int main()
{
    int x=100,*xp;
    float y=10.10,*yp;
    char z='D',*zp;

    //conteudo incial das variaveis declaradas
    printf("");
    printf("INT %d\n", x);
    printf("FLOAT %.2f\n", y);
    printf("CHAR %c\n\n", z);

    //recebe o conteudo do endereço e armazena
    xp=&x;
    yp=&y;
    zp=&z;

    //imprime o
    printf("PONTEIRO INT =='%d'\n",*xp);
    printf("PONTEIRO FLOAT='%.2f'\n",*yp);
    printf("PONTEIRO CHAR=='%c'\n",*zp);

    //modificando valores
    x=200;
    y=20.20;
    z='S';

    //imprimindo
    printf("\nPONTEIRO INT =='%d'\n",*xp);
    printf("PONTEIRO FLOAT='%.2f'\n",*yp);
    printf("PONTEIRO CHAR=='%c'\n",*zp);

    return 0;
}
#endif // ex1

#ifdef ex2
/*Escreva um programa que contenha duas vari ´aveis inteiras. Compare seus enderec¸os e
exiba o maior enderec¸o.*/
int main()
{

    return 0;
}
#endif // ex2
