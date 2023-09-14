#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia dois números inteiros e depois os imprima na
//ordem inversa em que eles foram lidos.


int main()
{
    int i;
    int j;

    printf("Escreva um numero\n");
    scanf("%d",&i);
    printf("Escreva outro numero\n");
    scanf("%d",&j);
    printf("%d, %d", j, i);
    return 0;
}
