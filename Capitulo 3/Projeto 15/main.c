#include <stdio.h>
#include <stdlib.h>

//Faça um programa para ler um número inteiro positivo de três dígitos.
//Em seguida, calcule e mostre o número formado pelos dígitos invertidos do
//número lido. Exemplo: Número lido = 123 Número gerado = 321


int main()
{
    int a;
    int b;
    int c;

    printf("Escreva 3 numeros\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Seu numero invertido e : %d %d %d\n", c, b, a);
    return 0;
}
