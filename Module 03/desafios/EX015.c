#include <stdio.h>

int main(void)
{   
    float n1, n2;

    printf("\n<<<  EX015 - Bons alunos merecem parabéns  >>>\n\n");
    printf("\nDigite sua primeira nota: ");
    scanf(" %f", &n1);
    printf("Digite sua segunda nota: ");
    scanf(" %f", &n2);

    float result  = (n1 + n2) / 2;

    if ( result >= 7.0)
    {
        printf("\n-------------------------------------\n");
        printf("Parabéns!! Sua média final foi %.2f!\n", result);
        printf("-------------------------------------\n");
    }
    else
    {
        printf("\n-------------------------------------\n");
        printf("Que pena, sua média foi %.2f, você foi reprovado!\n", result);
        printf("Estude mais!");
        printf("\n-------------------------------------\n");
    }

    return 0;
}   // end main