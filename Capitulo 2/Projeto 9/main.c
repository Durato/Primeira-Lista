#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia dois valores do tipo float. Use um único
//comando de leitura para isso. Em seguida, imprima os valores lidos na
//ordem inversa em que eles foram lidos.

int main()
{
    float i;
    float j;

    printf("Escreva um numero\n");
    scanf("%f", &i);
    printf("Escreva um segundo numero \n");
    scanf("%f",&j);
    printf("%f, %f",j,i);
    return 0;
}
