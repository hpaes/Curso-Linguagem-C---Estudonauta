#include <stdio.h>

int main(void)
{
    int iN1;
    int iDesloc = 0;

    printf("\n<<<   EX014 - Operadores de Deslocamento  >>>\n\n");
    printf("Digite um número: ");
    scanf("%d", &iN1);
    printf("Digite o deslocamento: ");
    scanf("%d", &iDesloc);

   int iResult1 = iN1 >> iDesloc;
   int iResult2 = iN1 << iDesloc;

    printf("\n\n----- Operações SHIFT -----\n");
    printf("Calculando %d >> %d é igual a %d\n", iN1, iDesloc, iResult1);
    printf("Calculando %d << %d é igual a %d\n", iN1, iDesloc, iResult2);

    return 0;
}   // end main
