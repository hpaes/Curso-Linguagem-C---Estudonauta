#include <stdio.h>
#include <string.h>

int main(void)
{
    char cS1[] = "A";
    char cS2[] = "B";
    char cS3[] = "A";
    int iResult1 = strcmp(cS1, cS2);
    int iResult2 = strcmp(cS2, cS1);
    int iResult3 = strcmp(cS1, cS3);

    printf("\nSe cS1 for menor que cS2 o resultado é %d\n", iResult1);
    printf("\nSe cS1 for maior que cS2 o resultado é %d\n", iResult2);
    printf("\nSe cS1 for igual a cS2 o resultado é %d\n", iResult3);

    return 0;

}   // end main
