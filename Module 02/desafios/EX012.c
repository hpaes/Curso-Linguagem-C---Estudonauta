#include <stdio.h>

int main(void)
{   
    int iNota1 = 0;
    int iNota2 = 0;

    printf("\n<<<   EX012 - Situação do Aluno   >>>\n\n");
    printf("Primeira Nota: ");
    scanf("%d", &iNota1);
    printf("\nSecunda Nota: ");
    scanf("%d", &iNota2);
    float fResult = (float)(iNota1 + iNota2) / 2;
    printf("\nA média do aluno foi: %.2f.\n", fResult);
    printf("\nA sua situação é %s\n", (fResult>=7)?"APROVADO":"REPROVADO");

    return 0;

}   // end main
