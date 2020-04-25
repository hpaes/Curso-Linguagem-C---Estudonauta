#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    
    // typecasting float
    float t = (float)n / 3;
    printf("\nA terça parte de %i é igual a %.2f.\n", n, t);

    return 0;

}   // end main
