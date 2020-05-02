#include <stdio.h>

int main(void)
{   
    float fPrice = 0.0;
    int iOpt;

    printf("\n<<<  EX030 - Preço por Época  >>>\n\n");
    printf("Digite o preço de um produto R$: ");
    scanf(" %f", &fPrice);

    printf("\n      ESCOLHA UM PERÍODO\n");
    printf("==================================\n");
    printf("1\tCarnaval [+10]\n2\tFérias Escolares [+20]\n3\tDia das Crianças [+5]\n4\tBlack Friday [-30]\n5\tNatal [-5]\n");
    printf("==================================\n");
    printf("Digite sua opção: ");
    scanf(" %d", &iOpt);

    switch (iOpt)
    {
        case 1:
            printf("\n----------------------------------------------------------\n");
            printf("Na época CARNAVAL, o preço do produto vai para R$ %.2f", fPrice + (fPrice * 0.1));
            printf("\n----------------------------------------------------------\n");
            break;
        
        case 2:
            printf("\n----------------------------------------------------------\n");
            printf("Na época FÉRIA ESCOLARES, o preço do produto vai para R$ %.2f", fPrice + (fPrice * 0.2));
            printf("\n----------------------------------------------------------\n");
            break;
        
        case 3:
            printf("\n----------------------------------------------------------\n");
            printf("Na época DIA DAS CRIANÇAS, o preço do produto vai para R$ %.2f", fPrice + (fPrice * 0.05));
            printf("\n----------------------------------------------------------\n");
            break;
        
        case 4:
            printf("\n----------------------------------------------------------\n");
            printf("Na época BLACK FRIDAY, o preço do produto vai para R$ %.2f", fPrice - (fPrice * 0.3));
            printf("\n----------------------------------------------------------\n");
            break;
        
        case 5:
            printf("\n----------------------------------------------------------\n");
            printf("Na época NATAL, o preço do produto vai para R$ %.2f", fPrice - (fPrice * 0.05));
            printf("\n----------------------------------------------------------\n");
            break;
        
        default:
            printf("\n----------------------------------------------------------\n");
            printf("Em épocas como esta, mantenha o preço em R$ %.2f", fPrice);
            printf("\n----------------------------------------------------------\n");
            break;
    }   // end switch

    return 0;

}   // end main
