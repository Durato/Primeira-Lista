#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia um número inteiro e mostre o seu
//complemento bit a bit.

int main()
{
    int num;
    printf("informe um valor\n");
    scanf("%d", &num);

    printf("complemento bit a bit %d", (~num)+1);

    return 0;
}
