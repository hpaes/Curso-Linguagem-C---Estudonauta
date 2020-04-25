#include <stdio.h>

int main(void)
{   
    // declarando variáveis
    char cProdName[20] = {0};
    float fProdPrice;
    float fProdDesc;

    printf("\n<<<  EX010 - Preço do Produto   >>>\n\n");

    printf("Produto: ");
    scanf("%s", cProdName);
    printf("\nPreço de %s: R$", cProdName);
    scanf("%f", &fProdPrice);
    printf("\nDesconto (%%): ");
    scanf("%f", &fProdDesc);

    fProdDesc = fProdDesc / 100;

    printf("\nO produto %s custava R$%.2f, mas com %.2f%% de desconto, passa a custar R$%.2f.\n"
    , cProdName, fProdPrice, fProdDesc * 100, fProdPrice - (fProdPrice * fProdDesc));

    return 0;

}   // end main
