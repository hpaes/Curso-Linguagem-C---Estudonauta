#include <stdio.h>

int main(void)
{
    int n1, n2;
    char cOpt;
    printf("\n<<<  EX028 - Super Calculadora v1.0  >>>\n\n");
    printf("Valor 1: ");
    scanf(" %d", &n1);
    printf("\nValor 2: ");
    scanf(" %d", &n2);
    printf("\n==========================\n");
    printf("+\tAdição\n");
    printf("-\tSubtração\n");
    printf("*\tMultiplicação\n");
    printf("/\tDivisão\n");
    printf("==========================\n");
    printf("Escolha uma opção: ");
    scanf(" %c", &cOpt);
    printf("\n");

    switch (cOpt)
    {
        case '+':
            printf("\n%d + %d é %d\n", n1, n2 , n1 + n2);
            break;

        case '-':
            printf("\n%d - %d é %d\n", n1, n2 , n1 - n2);
            break;
        
        case '*':
            printf("\n%d * %d é %d\n", n1, n2 , n1 * n2);
            break;
        
        case '/':
            printf("\n%d / %d é %.2f\n", n1, n2 , (float)n1 / n2);
            break;

        default:
            printf("\nSelecione uma das oções: '+', '-', '*' ou '/'\n");
            break;

    }   // end switch
    return 0;

}   // end main
