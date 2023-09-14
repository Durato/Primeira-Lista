#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um valor em reais e a cotação do dólar. Em
//seguida, imprima o valor correspondente em dólares.


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
