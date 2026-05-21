#include <stdio.h>

int main()
{

    int tabela[3][3];
    tabela[1][2] = 0;

    printf("Preencha a tabela 3x3: ");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("Entre com um valor para a posição[%i, %i]: ", i, j);
            scanf("%i", &tabela[i][j]);
        }
    }

    printf("Sua tabela ficou assim: \n");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf(" %i", tabela [i][j]);
            
        }
        printf("\n");
    }
    return 0;
}