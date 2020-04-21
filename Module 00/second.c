#include <stdio.h>

main()
{
    char cName[10] = {'\0'};

    printf("\nWhat's your name?\n");
    printf("> ");
    scanf("%s", cName);
    printf("\nNice to meet you, %s!\n", cName);
}