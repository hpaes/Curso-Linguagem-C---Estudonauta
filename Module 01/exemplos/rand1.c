#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int iRand = (rand() % 10 + 1);  // generate a random number between 1 and 10
    printf("\nI generated the number (%d)\n", iRand);

    return 0;

}