//12.02.2025

#include <stdio.h>

int main()
{
    int mat[4][4], i, j;
    int flag = 1; // Set default flag
    for (i = 0; i < 4; i++)
    {
        printf("\n Enter elements of row %d : ", i + 1);
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &mat[i][j]); // Enter elements per row
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if ((i > j || i < j) && mat[i][j] != 0) // Checks elements above and below the diagonal whether they are not zero
            {
                flag = 0; // Changes the flag when the condition is met
            }
        }
    }

    if (flag == 1)
    {
        printf("\n This is a diagonal matrix"); // Prints when the default flag exists
    }
    else
    {
        printf("\n This isn't a diagonal matrix"); // Prints when the flag has changed
    }
    return 0;
}
