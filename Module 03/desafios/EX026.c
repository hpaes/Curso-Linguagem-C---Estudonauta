#include <stdio.h>
#include <string.h>

int main(void)
{   
    char cEst[3];

    printf("\n<<<  EX026 - Qual é o seu Estad CARIOCA\n");
    printf("Em qual Estado do Brasil você nasceu? ");
    scanf(" %s", cEst);

    if (strcmp(cEst, "SP") == 0)
    {
        printf("\nNascendo em %s você é PAULISTA\n", cEst);
    }
    else if (strcmp(cEst, "PE") == 0)
    {
        printf("\nNascendo em %s você é PERNAMBUCANO\n", cEst);
    }
    else if (strcmp(cEst, "RJ") == 0)
    {
        printf("\nNascendo em %s você é CARIOCA\n", cEst);
    }
    else if (strcmp(cEst, "BA") == 0)
    {
        printf("\nNascendo em %s você é BAIANO\n", cEst);
    }
    else if (strcmp(cEst, "CE") == 0)
    {
        printf("\nNascendo em %s você é CEARENSE\n", cEst);
    }
    else if (strcmp(cEst, "MG") == 0)
    {
        printf("\nNascendo em %s você é MINEIRO\n", cEst);
    }
    else
    {
        printf("\nNascendo em %s, você é natural da sua cidade, mas ainda não sei como te chamar.\n", cEst);
        return 1;

    }   // end if
    
}   // end main
