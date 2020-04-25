#include <stdio.h>

int main(void)
{
    char cLetter;

    printf("\n<<<  EX008 - Alfabeto  >>>\n\n");
    printf("Digite uma letra: ");
    scanf("%c", &cLetter);
    printf("\nAntes da letra %c temos a letra %c. Depois temos a letra %c.\n",
    cLetter, cLetter - 1, cLetter + 1);

    return 0;

}   // end main
