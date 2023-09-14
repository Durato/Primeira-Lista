#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia um valor do tipo double e depois o imprima
//na forma de notação científica.


int main()
{
    double i;
    printf("Escreva um valor double\n");
    scanf("%f", &i);
    printf("Seu valor em notacao cientifica e %e", i);

    return 0;
}
