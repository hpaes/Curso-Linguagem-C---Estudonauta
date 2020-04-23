#include <stdio.h>

int main(void)
{
    char nome[30];

    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("\nVocê digitou \"%s\"\n", nome);

    return 0;
}