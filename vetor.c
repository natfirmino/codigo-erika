#include <stdio.h>

int main(){

    int A[3], i, count;

    printf("Digite os valores para o vetor:\n");
   
    for(i=0; i<3; i++){
        scanf("%d", &A[i]);
    }
   
    printf("[Indice] => Valor\n");
    count = 0;
    for(i=0; i<3; i++){
        printf("[%d] => %d\n", i, A[i]);
       
        if(A[i]%2==0){
            count++;
        }
    }
   
    printf("\nQuantidade de numeros pares: %d", count);
   
   
    return 0;
}
