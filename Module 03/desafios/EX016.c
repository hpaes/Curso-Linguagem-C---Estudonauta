#include <stdio.h>

int main(void)
{
    float fTotal;
    float fDesc;

    printf("\n<<<  EX016 - Consumidor ganha desconto  >>>\n\n");
    printf("Qual o valor total das compras? R$ ");
    scanf("%f", &fTotal);


    if (fTotal >= 500.00)
    {
        fDesc = fTotal * 0.1;

        printf("\n=======ATENÇÃO=======\n");
        printf("Por fazer mais de R$500 em compras, você vai receber R$%.2f de desconto\n", fDesc);
        printf("O valor a ser pago é de R$%.2f! Volte sempre!\n", fTotal - fDesc);
        printf("-------------------------------------------------------------------------\n");

    }

    if (fTotal < 500.00)
    {
        printf("\n---------------------------------------------------------------\n");
        printf("Obrigado por comprar conosco, volte sempre!\n");
        printf("---------------------------------------------------------------\n");
    }

    return 0;
}   // end main
