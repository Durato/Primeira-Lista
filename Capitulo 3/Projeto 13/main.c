#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Sejam a e b os catetos de um tri�ngulo cuja hipotenusa h �
//obtida pela equa��o:
//Fa�a um programa que leia os valores de a e b, e calcule o valor da
//hipotenusa atrav�s da f�rmula dada. Imprima o resultado.
//Fa�a um programa que converta uma letra mai�scula em letra min�scula. Use
//a tabela ASCII para isso.

int main()
{
    float a;
    float b;
    float h;

    printf("Digite o primeiro e o seguno cateto\n");
    scanf("%f %f", &a, &b);

    h = sqrt(a * a + b * b);

    printf("sua hipotenusa e : %f", h);



    return 0;
}
