#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("\nDigite um numero: ");
    scanf("%d", &n1);
    printf("\nDigite outro número: ");
    scanf("%d", &n2);

    int maior = (n1 > n2)?n1:n2;
    printf("\nO maior número entre %d e %d é %d.\n", n1, n2, maior);

    return 0;

}   // end main
