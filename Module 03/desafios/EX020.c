#include <stdio.h>

int main(void)
{
    float fDistKm = 0;

    printf("\n<<< EX020 - Preço da Passagem  >>>\n\n");
    printf("======= Tabela de Preços =======\n");
    printf("Viagens até 200 Km\tR$0.50/Km\n");
    printf("A partir de 200 Km\tR$0.35/Km\n");
    printf("----------------------------------");

    printf("\nDistância total da viagem, em Km: ");
    scanf("%f", &fDistKm);

    if (fDistKm <=200)
    {   
        printf("\nUma viagem de %.1f Km vai custar R$0,50/Km.\n",fDistKm);
        printf("Valor Total: R$%.2f.\n", fDistKm * 0.5);
        return 0;
    }
    else
    {
        printf("\nUma viagem de %.1f Km vai custar R$0,35/Km.\n", fDistKm);
        printf("Valor Total: R$%.2f.\n", (200 * 0.5) + ((fDistKm - 200) * 0.35));
        return 0;

    }   // end if
    
}   // end main
