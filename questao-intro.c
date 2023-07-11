#include <stdio.h>

int main () {
    int soma_im;
    int qtd_imp;
    int qtd_pa;
    int num;

    for(int i = 0; i< 1000; i++){
        printf("Digite um numero:");
        scanf("%d", &num);

        if(num % 2 ==0){
            qtd_pa++;
        }else{
            soma_im += num;
            qtd_pa++;
        }
    }

    float media = (float) soma_im / qtd_imp;

    printf("A quantidade de numeros pares eh %d\n:", qtd_pa);
    printf("A media dos numeros impares eh %.2f\n", qtd_imp);

    return 0;
}
