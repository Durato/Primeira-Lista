#include <stdio.h>
#include <stdlib.h>

// Fa�a um programa que leia um valor do tipo double e depois o imprima
//na forma de nota��o cient�fica.


int main()
{
    double i;
    printf("Escreva um valor double\n");
    scanf("%f", &i);
    printf("Seu valor em notacao cientifica e %e", i);

    return 0;
}
