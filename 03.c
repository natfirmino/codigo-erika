#include <stdio.h>

int main()
{
    int idade;
    double minutosV;

    printf("Digite a sua idade:");
    scanf("%d", &idade);

    const int minutosPorH = 60;
    const int horasPorD = 24;
    const int diasPorAno = 365;

    minutosV = idade * diasPorAno * horasPorD * minutosPorH;

    printf("A pessoa ja viveu %.2lf minutos.\n", minutosV);

    return 0;
}