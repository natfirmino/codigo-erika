#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[12];
    int idade;

    printf("Digite o nome do usuário:");
    scanf("%s", &nome);
    printf("Digite a idade:");
    scanf("%i", &idade);

    printf("%s tem %i de idade", nome, idade);
    



}