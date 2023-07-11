#include <stdio.h>

int main ()
{
    double diagonal1, diagonal2, ar;

    printf("Digite o valor da primeira diagonal:");
    scanf("%lf", &diagonal1);
    printf("Digite o valor da primeira diagonal:");
    scanf("%lf", &diagonal2);

    ar = (diagonal1*diagonal2)/2;

    printf("A area do losango eh: %.2lf\n", ar);

    return 0;
}
