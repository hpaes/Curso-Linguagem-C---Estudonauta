#include <stdio.h>

int main(void)
{

    int n = 8;
    int x = 9;

    printf("Incremento normal\n");
    // n++;
    // x--;
    printf("\nResultado é %d\n", n);
    printf("\nResultado é %d\n", x);

    printf("\nPós incremento\n");
    printf("\nO numéro é %d e o incremento é %d\n", n++, n);
    printf("\nResultado é %d e o decremento é %d\n", x--, x);

    printf("\nPré incremento\n");
    printf("\nO resultado é %d\n", ++n);
    printf("\nResultado é %d\n", --x);


    return 0;

}   // end main
