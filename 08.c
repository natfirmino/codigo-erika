#include <stdio.h>
#include <string.h>

int main() {
    char sigla[4];

    printf("Digite a sigla do estado: ");
    scanf("%s", sigla);

    if (strcmp(sigla, "AM") == 0) {
        printf("Amazonense\n");
    } else if (strcmp(sigla, "RJ") == 0) {
        printf("Carioca\n");
    } else if (strcmp(sigla, "PR") == 0) {
        printf("Paraense\n");
    } else if (strcmp(sigla, "AC") == 0) {
        printf("Acreano\n");
    } else {
        printf("Sigla nao reconhecida\n");
    }

    return 0;
}