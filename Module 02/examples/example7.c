#include <stdio.h>
#include <string.h> // para poder usar o strcpy

int main(void)
{
    char cSit[10];
    float fMedia = 5;

    strcpy(cSit, (fMedia>=7)?"APROVADO":"REPROVADO");
    printf("\nA situação do aluno é %s\n", cSit);

    return 0;

}   // end main
