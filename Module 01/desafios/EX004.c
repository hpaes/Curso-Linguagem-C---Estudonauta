#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // declaring variables
    char *cNames[3] = {'\0'};
    char *cGender[3] = {'\0'};
    char *cGrades[3];
    char *cOrder[3] = {"First", "Second", "Third"}; 

    for (int x = 0; x < 3; x++)
    {
        printf("\nRegistering %s person:\n", cOrder[x]);
        printf("----------------------------");
        printf("\nNAME: ");
        cNames[x] = malloc(sizeof(cNames));
        scanf("%s", cNames[x]);
        printf("\nGENDER [M/F]: ");
        cGender[x] = malloc(sizeof(cGender));
        scanf("%s", cGender[x]);
        printf("\nGRADES: ");
        cGrades[x] = malloc(sizeof(cGrades));
        scanf(" %s", cGrades[x]);
    }

    printf("\nFull List\n");
    printf("----------------------------------\n");
    printf("NAME\t\tGENDER  GRADE\n");
    for (int x = 0; x < 3; x++)
    {
        printf("%s\t\t    %s      %s\n", cNames[x], cGender[x], cGrades[x]);
    }

    return 0;

    free(cGender);
    free(cGrades);
    free(cNames);

}   // end main
