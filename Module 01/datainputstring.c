#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[30];
    char endereco[50];

    printf("\nDigite seu nome: ");
    // scanf("%s", nome);
    fgets(nome, sizeof(nome), stdin);
    
    printf("\nSeu endereço: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("\nSeu nome é %s\ne seu endereço é %s\n", nome, endereco);

    return 0;
}