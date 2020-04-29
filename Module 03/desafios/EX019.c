#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int iYear = data->tm_year + 1900;

    printf("\n<<<  EX019 - Ano Bissexto  >>>\n\n");

    printf("Digite um ano qualquer: ");
    scanf(" %d", &iYear);

    if (iYear % 4 == 0  && iYear % 100 != 0 || iYear % 400 == 0)
    {
        printf("\nO ano %d é BISSEXTO.\n", iYear);
        return 0;
    }
    else
    {
        printf("\nO ano %d não é BISSEXTO.\n", iYear);
        return 1;

    }   // end if
    
}   // end main
