#include <stdio.h>

int main(void)
{
    // declarando variáveis
    char cName[30] = {0};
    float fWeight = 0.0;
    int iAge = 0;

    printf("Qual é o seu nome? ");
    scanf("%s", cName);
    printf("\nQuantos anos você tem? ");
    scanf(" %d", &iAge);
    printf("\nQual é o seu peso?(Kg) ");
    scanf(" %f", &fWeight);

    printf("\nPrazer em conhecê-lo, %s. Você tem %d anos e pesa %1.1f Kg, correto?\n", cName, iAge, fWeight);

    return 0;

}   // end main