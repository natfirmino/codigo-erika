#include <stdio.h>
#include <string.h>

int main() {
    int num_pessoas, i, contagem = 0;
    char time[20];
    
    printf("Quantas pessoas na lista? ");
    scanf("%d", &num_pessoas);
    
    for (i = 0; i < num_pessoas; i++) {
        printf("Insira o time que a pessoa torce: ");
        scanf("%s", time);
        
        if (strcmp(time, "São Paulo") == 0) {
            contagem++;
        }
    }
    
    printf("Existem %d torcedores do São Paulo na lista.\n", contagem);
    
    return 0;
}
