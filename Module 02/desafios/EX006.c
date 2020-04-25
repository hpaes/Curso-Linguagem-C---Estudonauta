#include <stdio.h>

int main(void)
{   
    // declarando variáveis
    int iNum = 0;

    printf("\n<<< EX006 - Antecessor e Sucessor >>>\n\n");
    printf("Digite um número: ");
    scanf(" %d", &iNum);
    printf("\nAnalisando o número %d, seu antecessor é %d e seu sucessor é %d.\n",
     iNum, iNum - 1, iNum + 1);

     return 0;

}   // end main
