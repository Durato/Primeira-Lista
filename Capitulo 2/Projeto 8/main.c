#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia dois n�meros inteiros e depois os imprima na
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
