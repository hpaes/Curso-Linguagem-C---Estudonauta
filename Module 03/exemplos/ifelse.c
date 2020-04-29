#include <stdio.h>

int main(void)
{
    int n;
    printf("\nDigite um valor: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("\nO número %d é PAR.\n", n);
        return 0;

    }
    else
    {
        printf("\nO número %d é Ímpar.\n", n);
        return 0;
    }

}   // end main
