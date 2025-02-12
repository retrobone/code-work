//12.02.2025

#include <stdio.h>

int main()
{
    int mat[6][6], i, j;
    int flag = 1; // Set default flag
    for (i = 0; i < 6; i++)
    {
        printf("\n Enter elements of row %d : ", i + 1);
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &mat[i][j]); // Take elements for every row
        }
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if ((i - j > 1 || i - j < -1) && mat[i][j] != 0) // i - j > 1 to check below the diagonal and i - j< -1 to check above the diagonal
            {
                flag = 0; // Changes the flag when the condition isn't met
            }
        }
    }

    if (flag == 1)
    {
        printf("\n This is a tridiagonal matrix"); // Prints when the default flag is there
    }
    else
    {
        printf("\n This isn't a tridiagonal matrix"); // Prints when the flag is changed
    }
    return 0;
}
