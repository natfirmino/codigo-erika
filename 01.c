#include <stdio.h>
 
 int main () 
 {
    float media, n1,n2;

    printf("Digite a primeira nota:");
    scanf("%f", &n1);
    printf("Digite a segunda nota:");
    scanf("%f", &n2);

    media = (n1+n2)/2;

    printf("A sua media eh %2.f:", media);

    return 0;
 }