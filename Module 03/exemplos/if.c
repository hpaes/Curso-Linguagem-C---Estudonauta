#include <stdio.h>

int main(void)
{
    float fVel;
    printf("\nDigite a velocidade do automóvel: ");
    scanf("%f", &fVel);

    if (fVel > 80)
    {
        printf("\nVocê foi multado!\n");
    }
    
    printf("\nSe beber não dirija!\n");

    return 0;
}   // end main
