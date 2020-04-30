#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("\nDigite o primeiro número: ");
    scanf(" %d", &n1);
    printf("\nDigite o segundo número: ");
    scanf(" %d", &n2);

    if (n1 > n2)
    {
        printf("\nO primeiro valor é maior.\n");
        return 0;
    }
    else
    {
        if (n1 < n2)
        {
            printf("\nO segundo valor é maior.\n");
            return 0;
        }
        else
        {
            printf("\nOs dois valores são iguais\n");
            return 0;
        }   

    }   // end if
    
}   // end main
