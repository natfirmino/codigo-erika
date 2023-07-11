#include <stdio.h>

int main () 
{
    double salarioBruto, valorPrest;

    printf("Digite o valor do salario bruto:");
    scanf("%lf", &salarioBruto);
    printf("Digite o valor da prestacao:");
    scanf("%lf", &valorPrest);
    
    double valorMax = salarioBruto *0.3;

    if(valorPrest<=valorMax){
        printf("Emprestimo concedido");
    }else{
        printf("Emprestimo nao concebido");
    }
    return 0;
}