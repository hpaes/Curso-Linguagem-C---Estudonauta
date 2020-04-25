#include <stdio.h>

int main(void)
{   
    // declarando variáveis
    int iNumber = 0;

    printf("\n<<<   EX011 - Par ou Ímpar   >>>\n\n");
    printf("Digite um número qualquer: ");
    scanf("%d", &iNumber);
    printf("\nO número %d é %s.\n", iNumber, ((iNumber % 2) == 0)?"PAR":"ÍMPAR");

    return 0;

}   // end main
