#include <stdio.h>

int main () 
{
    double fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit:");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit-32)*5 / 9;

    printf("A temperatura em Celsius eh: %.2lf graus Celsius", celsius);

    return 0;
}