#include <stdio.h>

int main(void)
{   
    int iNum;
    printf("\n<<<  EX021 - Inverso ou Oposto  >>>\n\n");
    printf("Digite um número: ");
    scanf("%d", &iNum);

    if (iNum < 0)
    {
        printf("\nO oposto de %d é %d\n", iNum, -iNum);
        return 0;
    }
    else
    {
        printf("\nO inverso de %d é %.2f\n", iNum, (float) 1/iNum);
        return 1;
    }
    
}   // end main
