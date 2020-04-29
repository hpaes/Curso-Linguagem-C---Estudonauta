#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int iBday = 0;
    int y = data->tm_year + 1900;
    int iResult = 0;

    printf("\n<<<  EX017 - Fila de Banco  >>>\n\n");
    printf("Em que ano você nasceu? ");
    scanf(" %i", &iBday);

    iResult = y - iBday;

    printf("\n-------------------------------------------\n");
    printf("Você tem %i anos, certo?\n", iResult);
    printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");
    printf("-------------------------------------------\n");

    return 0;
}   // end main
