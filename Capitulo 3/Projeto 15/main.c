#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa para ler um n�mero inteiro positivo de tr�s d�gitos.
//Em seguida, calcule e mostre o n�mero formado pelos d�gitos invertidos do
//n�mero lido. Exemplo: N�mero lido = 123 N�mero gerado = 321


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
