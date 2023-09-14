#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um número inteiro e retorne seu antecessor e
//seu sucessor.


int main()
{
    int i;

    printf("Fale um numero\n");
    scanf("%d", &i);
    i--;
    printf("%d\n", i);
    i++;
    i++;
    printf("%d\n", i);
        return 0;
}
