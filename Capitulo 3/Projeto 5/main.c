#include <stdio.h>
#include <stdlib.h>

//Faça um programa que calcule o ano de nascimento de uma pessoa a
//partir de sua idade e do ano atual.


int main()
{
    int ano = 2023;
    int idade;
    int n;

    printf("Digite sua idade\n");
    scanf("%d", &idade);

    n = ano - idade;

    printf("seu ano de nascimento e : %d", n);
    return 0;
}
