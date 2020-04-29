#include <time.h>
#include <stdio.h>

int main(void)
{
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int d = data->tm_mday;
    int m = data->tm_mon + 1;   // janeiro é 0
    int y = data->tm_year + 1900;   // o calendário começa em -1900

    printf("\nA data de hoje é %i/%i/%i\n", d, m, y);

    return 0;
}   // end main