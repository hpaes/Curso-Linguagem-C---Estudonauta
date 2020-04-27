#include <stdio.h>

int main(void)
{
    int a = 5, b = 4, c = 2;
    printf("%s\n", a > b || a < c && !c!=4?"Verdadeiro":"Falso");
    // V || F && !V
    // V || F && F
    // V || F
    // V
    // Verdadeiro devido a precedência, "!" / "&&" / "||"
    return 0;

}   // end main
