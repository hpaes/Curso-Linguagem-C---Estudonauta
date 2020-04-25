#include <stdio.h>

int main(void)
{
    // declarando variáveis
    float fN1;
    float fN2;

    printf("\n<<<  EX009 - Média do Aluno  >>>\n\n");
    printf("Nota 1: ");
    scanf("%f", &fN1);
    printf("\nNota 2: ");
    scanf("%f", &fN2);
    float fResult = (fN1 + fN2) / 2;

    printf("\nO aluno tirou notas %.1f e %.1f. Sua média foi %.1f.\n",
    fN1, fN2, fResult);

    return 0;

}   // end main
