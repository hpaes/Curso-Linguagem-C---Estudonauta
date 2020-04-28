#include <stdio.h>

int main(void)
{ 
/*   (^) p  q  p^q   
         1  1   0
         1  0   1
         0  1   1
         0  0   0  */

    int n = 25 & 12;
    int x = 25 ^ 12;
    int l = 25 | 12;
    printf("\nO resultado foi %i\n", x);
    printf("\nO resultado foi %i\n", n);
    printf("\nO resultado foi %i\n", l);

    // (25)10 = 11001
    // (12)10 =  1100

    // 11001
    // &1100
    // 01000 = 8

    // 11001
    // |1100
    // 11101 = 29

    // 11001
    // ^1100
    // 10101 = 21

    
    return 0;

}   // end main
