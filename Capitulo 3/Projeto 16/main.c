#include <stdio.h>
#include <stdlib.h>

//Escreva um
//programa que leia um número inteiro e mostre a multiplicação e a divisão
//desse número por dois (utilize os operadores de deslocamento de bits).

int main()
{
    int v;
    int d;
    int m;

    printf("Digite um numero para ser dividido e multiplicado por 2\n");
    scanf("%d", &v);
    d = v >>1;
    m = v <<1;
    printf("Seu valor dividido e multiplicado e : %d %d", d, m);

    return 0;
}
