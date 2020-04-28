#include <stdio.h>

int main(void)
{
    int iVal1, iVal2;

    printf("\n<<<  EX013 - Operadores Bitwise  >>>\n");
    printf("\nDigite o primeiro valor: ");
    scanf(" %i", &iVal1);
    printf("\nDigite o segundo valor: ");
    scanf(" %i", &iVal2);

    int iBitAnd = iVal1 & iVal2;
    int iBitOr = iVal1 | iVal2;
    int iBitXor = iVal1 ^ iVal2;

    printf("\n------   OPERAÇÕES BITWISE   ------\n");
    printf("Calculando %i & %i é igual a %i\n", iVal1, iVal2, iBitAnd);
    printf("Calculando %i | %i é igual a %i\n", iVal1, iVal2, iBitOr);
    printf("Calculando %i ^ %i é igual a %i\n", iVal1, iVal2, iBitXor);

    return 0;

}
