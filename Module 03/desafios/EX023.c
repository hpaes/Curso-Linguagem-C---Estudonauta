#include <stdio.h>

int main(void)
{
    int iNum;

    printf("\n<<<  EX023 - Positivo ou Negativo  >>>\n\n");
    printf("Me diga um número e eu te direi se\n ele é POSITIVO, NEGATIVO OU NULO\n\n");
    
    printf("Digite um número: ");
    scanf(" %d", &iNum);

    if (iNum < 0)
    {
        printf("\nO valor %d é NEGATIVO.\n", iNum);
        return 0;
    }
    else if (iNum > 0)
    {
        printf("\nO valor %d é POSITIVO.\n", iNum);
        return 1;
    }
    else
    {
        printf("\nO valor %d é NULO.\n", iNum);
        return 2;

    }   // end if
    
}   // end main
