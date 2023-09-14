#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Sejam a e b os catetos de um triângulo cuja hipotenusa h é
//obtida pela equação:
//Faça um programa que leia os valores de a e b, e calcule o valor da
//hipotenusa através da fórmula dada. Imprima o resultado.
//Faça um programa que converta uma letra maiúscula em letra minúscula. Use
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
