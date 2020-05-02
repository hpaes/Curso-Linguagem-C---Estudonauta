#include <stdio.h>

int main(void)
{
    int n;
    printf("\nDigite um número: ");
    scanf(" %i", &n);

    switch (n)
    {
        case 1:
            printf("\nUm");
            break;
        
        case 2:
            printf("\nDois");
            break;
        case 3:
            printf("\nTrês");
            break;

        case 4:
            printf("\nQuatro");
            break;
        
        default:
            printf("\nErro!");
            break;
    }       
    printf("\nAcabou!\n");

}   // end main