#include <stdio.h>
#include <stdlib.h>

//Leia uma velocidade em km/h (quil�metros por hora) e apresente
//convertida em m/s (metros por segundo). A f�rmula de convers�o � M =
//K/36, sendo K a velocidade em km/h e M em m/s.


int main()
{
    float km;
    float m;

    printf("Fale uma velocidade em km/h\n");
    scanf("%f", &km);

    m = km/3.6;

    printf("Sua velocidade em m/s e : %f", m);
    return 0;
}
