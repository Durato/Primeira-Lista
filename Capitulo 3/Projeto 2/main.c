#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia um n�mero real e imprima a quinta parte
//desse n�mero.


int main()
{
    int i;

    printf("Digite um numero\n");
    scanf("%d", &i);

    i = i / 5;

    printf("%d", i);

    return 0;
}
