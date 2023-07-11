#include <stdio.h>

int main() {
    int idade[100], total_homem = 0, count_mulher = 0, soma_idade_mulher = 0;
    char sexo[100];

    for (int i = 0; i < 3; i++) {
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idade[i]);
        printf("Digite o sexo do aluno %d (M/F): ", i + 1);
        scanf(" %c", &sexo[i]);

        if (sexo[i] == 'M') {
            total_homem++;
        } else if (sexo[i] == 'F') {
            soma_idade_mulher += idade[i];
            count_mulher++;
        }

        printf("Aluno %d: idade %d, sexo %c\n", i + 1, idade[i], sexo[i]);
    }

    if (count_mulher > 0) {
        float media_idade_mulher = (float) soma_idade_mulher / count_mulher;
        printf("Média de idade das mulheres: %.2f\n", media_idade_mulher);
    } else {
        printf("Nao foram inseridas informações de mulheres.\n");
    }

    printf("Total de homens: %d\n", total_homem);

    return 0;
}
