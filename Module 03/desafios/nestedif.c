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
        printf("\nO maior valor é %d\n", n1);
        return 0;
    }
    else
    {
        if (n1 < n2)
        {
            printf("\nO maior número é %d\n", n2);
            return 0;
        }
        else
        {
            printf("\nO número digitados são iguais\n");
            return 0;
        }   

    }   // end if
    
}   // end main
