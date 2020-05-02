#include <stdio.h>

int main (void)
{
    int n1, n2, n3;

    printf("\n<<<  EX027 - Três valores em ordem  >>>\n\n");
    printf("Me diga três números e eu os colocarei\nem ordem para você,\n");
    printf("Primeiro número: ");
    scanf(" %d", &n1);
    printf("\nSegundo número: ");
    scanf(" %d", &n2);
    printf("\nTerceiro número: ");
    scanf(" %d", &n3);

    if (n1 > n2 && n2 > n3)
    {
        printf("\nOs números em ordem crescente são: %d %d %d\n", n3, n2, n1);
        return 0;
    }
    else if (n1 > n3  && n3 > n2)
    {
        printf("\nOs números em ordem crescente são: %d %d %d\n", n2, n3, n1);
        return 0;
    }
    else if (n3 > n2 && n2 > n1)
    {
        printf("\nOs números em ordem crescente são: %d %d %d\n", n1, n2, n3);
        return 0;
    }
    else if (n3 > n1 && n1 > n2)
    {
        printf("\nOs números em ordem crescente são: %d %d %d\n", n2, n1, n3);
        return 0;

    }   // end if

}   // end main
