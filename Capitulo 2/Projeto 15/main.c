#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia tr�s vari�veis: char, int e float. Em
//seguida, imprima-as de tr�s maneiras diferentes: separadas por espa�os,
//por uma tabula��o horizontal e uma em cada linha. Use um �nico comando
//printf() para cada opera��o de escrita das tr�s vari�veis.


int main()
{
    char a = 'a';
    int b = 2;
    float c = 3;

    printf(" \t %c \n \t %d \n \t %f \n", a,b,c);
    return 0;
}
