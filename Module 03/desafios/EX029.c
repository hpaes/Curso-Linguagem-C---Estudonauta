#include <stdio.h>

int main(void)
{
    int iOpt;
    float fPesoTerra = 0.0;

    printf("\n<<<  EX029 - Seu peso nos Planetas v1.0  >>>\n\n");
    printf("Digite seu peso na Terra (Kg): ");
    scanf(" %f", &fPesoTerra);

    printf("\n      ESCOLHA UM PLANETA\n");
    printf("==================================\n");
    printf("1\tMercúrio\n2\tVênus\n3\tMarte\n4\tJúpiter\n5\tSaturno\n6\tUrano\n");
    printf("==================================\n");
    printf("Digite sua opção: ");
    scanf(" %d", &iOpt);

    switch (iOpt)
    {
        case 1:
            printf("\nSeu peso em Mercúrio é de %.2f Kg.\n", (fPesoTerra * 3.7) / 9.8 );
            break;

        case 2:
            printf("\nSeu peso em Vênus é de %.2f Kg.\n", (fPesoTerra * 8.87) / 9.8 );
            break;

        case 3:
            printf("\nSeu peso em Marte é de %.2f Kg.\n", (fPesoTerra * 3.71) / 9.8 );
            break;

        case 4:
            printf("\nSeu peso em Júpiter é de %.2f Kg.\n", (fPesoTerra * 24.79) / 9.8 );
            break;

        case 5:
            printf("\nSeu peso em Saturno é de %.2f Kg.\n", (fPesoTerra * 10.44) / 9.8 );
            break;

        case 6:
            printf("\nSeu peso em Urano é de %.2f Kg.\n", (fPesoTerra * 8.87) / 9.8 );
            break;

        default:
            printf("\nPor favor selecione um dos planetas disponíveis\n");
            break;

    }   // end switch
    
    return 0;

}   // end main
