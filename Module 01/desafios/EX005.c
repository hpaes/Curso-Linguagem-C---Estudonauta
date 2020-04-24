// Programa feito por: Herbert Paes

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int iRand = 0;
    int iGuess = 0;
    int iTries = 0;

    srand(time(NULL));
    iRand = rand() % 5 + 1; // gera um número aleatório entre 1 e 5

    printf("\n<<< EX005 - Será que você acerta? >>>\n\n\n");
    printf("Vou pensar em um número entre 1 e 5. Tente advinhar!\n");
    printf("Você tem 3 chances!\n");

    while (iTries != 3)
    {   
        printf("\nTentativa: %d\n", iTries + 1);
        printf("Qual é o seu palpite? ");
        scanf(" %d", &iGuess);

        if (iGuess == iRand)
        {
            printf("\nParabéns você acertou na %dº tentativa!\n", iTries + 1);
            return 0;
        }
        else if (iGuess < iRand)
        {
            printf("\nO número que pensei é maior que %d.\n", iGuess);
        }
        else
        {
            printf("\nO número que pensei é menor que %d.\n", iGuess);
        }
        iTries++;
    }

    return 0;
    
}   // end main
