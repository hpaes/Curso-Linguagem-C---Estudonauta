#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int hora = data->tm_hour;
    
    int iMovie = 19;
    int iTicket = 20;
    int iMoney =0;

    printf("\n<<<  Dá pra ver o filme?  >>>\n\n");
    printf("==================CINEMA ESTUDONAUTA==================\n");
    printf("HORÁRIO DO FILME: 19h - PREÇO DO INGRESSO: R$ 20");
    printf("\n-------------------------------------------------------\n");

    printf("Quanto dinheiro você tem? R$");
    scanf("%d", &iMoney);

    if (iMoney >= 20 && hora <= iMovie)
    {
        printf("\nAgora são %d horas.\n", hora);
        printf("Você consegue comprar o ingresso!\n");
        return 0;
    }
    else
    {
        printf("\nAgora são %d horas.\n", hora);
        printf("Infelizmente não é possível comprar o ingresso!\n");
        return 1;

    }   // end if
    
}   // end main
