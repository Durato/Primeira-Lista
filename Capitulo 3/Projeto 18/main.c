#include <stdio.h>
#include <stdlib.h>

//Elabore um programa que leia dois n�meros inteiros e exiba o
//deslocamento, � esquerda e � direita, do primeiro n�mero pelo segundo.

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
