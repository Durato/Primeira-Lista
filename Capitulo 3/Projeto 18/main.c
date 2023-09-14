#include <stdio.h>
#include <stdlib.h>

//Elabore um programa que leia dois números inteiros e exiba o
//deslocamento, à esquerda e à direita, do primeiro número pelo segundo.

int main()
{
    int a;
    int b;

    printf("Escreva 2 numeros\n");
    scanf("%d %d", &a, &b);

   int direita = a >> b;

   int esquerda = a << b;

    printf("o deslocamento e %d %d\n", direita, esquerda);



    return 0;
}
