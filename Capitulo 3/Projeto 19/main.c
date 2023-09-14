#include <stdio.h>
#include <stdlib.h>

//Elabore um programa que leia dois números inteiros e exiba o
//resultado das operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit”
//entre eles.


int main()
{
    int a;
    int b;

    printf("escreva dois numeros inteiros\n");
    scanf("%d %d", &a, &b);

    int xor = a ^ b;
    int or = a | b;
    int and = a & b;

    printf("Xor, Or e And %d, %d, %d", xor, or, and);
    return 0;
}
