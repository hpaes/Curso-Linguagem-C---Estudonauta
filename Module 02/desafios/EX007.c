#include <stdio.h>

int main(void)
{
    // declarando variáveis
    int iNum = 0;

    printf("\n<<<  EX007 - Dobro e Terça Parte  >>>\n\n");
    printf("Digite um número: ");
    scanf("%d", &iNum);
    printf("\nAnalisando o número %d, seu dobro é %d e sua terça parte é %.2f.\n",
    iNum, iNum * 2, (float) iNum / 3);
    return 0;

}   // end main
