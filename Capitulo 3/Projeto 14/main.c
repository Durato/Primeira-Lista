#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que converta uma letra mai�scula em letra min�scula. Use
//a tabela ASCII para isso.

int main()
{
    char c;
    int m = 'A';
    int n = 'a';
    int d = n - m;
    scanf("%c", &c);
    printf("%c", c + d);
   return 0;
}
