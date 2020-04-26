#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertU(char *);

int main(void)
{   
    char cName[15];

    printf("\nDigite um nome: ");
    scanf("%s", cName);

    convertU(cName);
    printf("\nO nome em maiúsculo é %s\n", cName);
    return 0;

}   // end main

void convertU(char *str)
{
    for (int x = 0, n = strlen(str); x <= n; x++)
    {
        str[x] = toupper(str[x]);
    }
}