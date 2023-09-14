#include <stdio.h>
#include <stdlib.h>

//Leia um ângulo em graus e apresente-o convertido em radianos. A
//fórmula de conversão é R = G * π/180, sendo G o ângulo em graus e R em
//radianos e π = 3.141592.


int main()
{
    double g;
    double r;
    const double pi = 3.141592;
    printf("Escreva um angulo em graus\n");
    scanf("%lf", &g);
    r = g * pi / 180;
    printf("Seu graus em radianos e : %lf\n", r);
    return 0;
}
