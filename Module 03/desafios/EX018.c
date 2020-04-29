#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int iActYear = data->tm_year + 1900;
    int iByear = 0;

    printf("\n<<<  EX018 - Serviço Militar v1.0  >>>\n\n");
    printf("Atualmente estamos no ano de %d\n", iActYear);
    printf("Em que ano você nasceu? ");
    scanf(" %d", &iByear);

    printf("\n-------------------------------------\n");
    printf("Sua idade atual é %d anos.", iActYear - iByear);

    if ((iActYear - iByear) >= 18)
    {
        printf("\nJá fez 18 anos. Espero sinceramente que você já tenha se alistado.\n");
        return 0;
    }
    else
    {
        printf("\nVocê ainda não tem 18 anos. Não pode se alistar\n");
        return 0;
    }

}   // end main