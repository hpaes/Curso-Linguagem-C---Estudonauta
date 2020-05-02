#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("\n<<<  EX024 - Ordem em dois números  >>>\n\n");
    printf("Me diga dois números e eu os colocarei\nos dois em ordem crescente.");
    printf("\nPrimeiro número: ");
    scanf(" %d", &n1);
    printf("\nSegundo número: ");
    scanf(" %d", &n2);

    if (n1 > n2)
    {
        printf("\nOs números em ordem crescente são %d e %d.\n", n2, n1);
        return 0;
    }
    else if (n2 > n1)
    {
        printf("\nOs números em ordem crescente são %d e %d.\n", n1, n2);
        return 0;
    }
    else
    {
        printf("\nOs números digitados são iguais.\n");
        return 0;
    }   // end if
    
}   // end main
