#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia três variáveis: char, int e float. Em
//seguida, imprima-as de três maneiras diferentes: separadas por espaços,
//por uma tabulação horizontal e uma em cada linha. Use um único comando
//printf() para cada operação de escrita das três variáveis.


int main()
{
    char a = 'a';
    int b = 2;
    float c = 3;

    printf(" \t %c \n \t %d \n \t %f \n", a,b,c);
    return 0;
}
