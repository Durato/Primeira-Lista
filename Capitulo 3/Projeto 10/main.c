#include <stdio.h>
#include <stdlib.h>
#define valor 780.000

//A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de
//um concurso, sendo que:
//i. O primeiro ganhador receber� 46% do total.
//ii. O segundo receber� 32% do total.
//iii. O terceiro receber� o restante.
//Calcule e imprima a quantia recebida por cada um dos ganhadores.


int main()
{
    double i;
    double ii;
    double iii;

    i = valor * 46 / 100;

    ii = valor * 32 / 100;

    iii = valor - i - ii;

    printf("%lf %lf %lf\n", i, ii, iii);
    return 0;
}
