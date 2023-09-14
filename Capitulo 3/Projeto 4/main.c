#include <stdio.h>
#include <stdlib.h>

//Leia quatro valores do tipo float. Calcule e exiba a média aritmética
//desses valores.


int main()
{
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;

    printf("Digite quatro numeros\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    e = a + b + c + d;

    f = e / 4;

    printf("Sua media e : %f", f);

    return 0;
}
