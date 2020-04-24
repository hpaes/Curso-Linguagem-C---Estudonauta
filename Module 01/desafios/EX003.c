#include <stdio.h>

int main(void)
{
    // declaring variables
    char cName[30] = {0};
    float fWeight = 0.0;
    int iAge = 0;

    printf("What\'s your name? ");
    scanf("%s", cName);
    printf("\nHow old are you? ");
    scanf(" %d", &iAge);
    printf("\nWhat\'s your weight? ");
    scanf(" %f", &fWeight);

    printf("\nNice to meet you, %s. You are %d years old and weights %1.1f Kg, is that correct?\n", cName, iAge, fWeight);

    return 0;

}   // end main