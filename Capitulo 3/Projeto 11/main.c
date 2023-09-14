#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

//Leia o valor do raio de um círculo. Calcule e imprima a área do
//círculo correspondente. A área do círculo é A = π* raio2, sendo π =
//3.141592.


int main()
{
    float r;
    float a;

    printf("Fale um valor do raio de um circulo\n");
    scanf("%f", &r);

    a = pi * r * r;

    printf("a area do seu circulo e : %f\n", a);
    return 0;
}
