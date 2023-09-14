#include <stdio.h>
#include <stdlib.h>

//Elabore um programa que solicite ao usuário entrar com o valor do
//dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados
//por uma barra (\).


int main()
{
    int d;
    int m;
    int a;

    printf("insira o dia,mes e ano\n");
    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &a);
    printf("%d/%d/%d", d,m,a);

    return 0;
}
