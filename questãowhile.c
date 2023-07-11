#include <stdio.h>
int main()
{
    double nota, media, soma;
    int alunos, i;
    printf("Digite o nro de alunos: ");
    scanf("%d", &alunos);
    i = 1;
    soma = 0;
    while (i <= alunos)
    {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%lf", &nota);
        soma += nota;
        i++;
    }
    media = soma / alunos;
    printf("A média das notas é: %.2lf\n", media);
    return 0;
}
