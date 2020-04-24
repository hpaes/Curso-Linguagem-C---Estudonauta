#include <stdio.h>

int main(void)
{
    char r;
    char s;
    printf("\nDigite uma letra: ");
    scanf("%c", &r);
    printf("\nDigite outra letra :");
    scanf(" %c", &s);

    printf("\nVocê digitou as letras \"%c\" e \"%c\"\n", r, s);
    
    return 0;
}