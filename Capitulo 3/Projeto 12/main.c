#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592
//Leia a altura e o raio de um cilindro circular e imprima o volume
//desse cilindro. O volume de um cilindro circular é calculado por meio da
//seguinte fórmula:
//em que π = 3.141592.

int main()
{
    float a;
    float r;
    float v;

    printf("Defina a altura e o raio de um cilindro\n");
    scanf("%f %f", &a, &r);

    v = pi * r * r * a;

    printf("Seu volume do cilindro e : %f", v);
    return 0;
}
