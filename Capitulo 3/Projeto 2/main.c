#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um número real e imprima a quinta parte
//desse número.


int main()
{
    int i;

    printf("Digite um numero\n");
    scanf("%d", &i);

    i = i / 5;

    printf("%d", i);

    return 0;
}
