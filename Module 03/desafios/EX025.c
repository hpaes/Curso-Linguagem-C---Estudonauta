#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int iBirth = 0;
    int iAno = data->tm_year + 1900;
    int iAlist = 18;

    printf("\n<<<  EX025 - Serviço Militar v2.0  >>>\n\n");
    printf("Atualmente estamos no ano de %d.\n", iAno);
    printf("Em que ano você nasceu? ");
    scanf(" %d", &iBirth);

    int iDade = iAno - iBirth;

    printf("\n------------------------------------------\n");
    printf("Sua idade atual é %d.\n", iDade);

    if (iDade > iAlist)
    {
        printf("\nSeu alistamento foi em %d. Ja se passaram %d anos.\n", iAno - (iDade - iAlist), iDade - iAlist);
        printf("\n------------------------------------------\n");
        return 0;
    }
    else
    {
        if (iDade < iAlist)
        {   
            printf("\nSeu alistamento será em %d. Ainda faltam %d anos.", (iAlist - iDade) + iAno, iAlist - iDade);
            printf("\n------------------------------------------\n");
            return 0;
        }
        else
        {
            printf("\nVocê completa 18 anos exatamente em %d. Vá se alistar.", iAno);
            printf("\n------------------------------------------\n");
            return 0;
        }

    }   // end if

}   // end main
