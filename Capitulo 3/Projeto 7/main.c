#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia um valor em reais e a cota��o do d�lar. Em
//seguida, imprima o valor correspondente em d�lares.


int main()
{
    float real;
    float dollar;

    printf("Fale uma quantidade de reais\n");
    scanf("%f", &real);

    dollar = real * 4.89;

    printf("Seu valor em dollar e : %f", dollar);

    return 0;
}
