// 16.02.2025
#include <stdio.h>

int main()
{
    int TArr[10][3], arr[3][3], i, j, k = 1, data;
    TArr[0][0] = 3; // Rows in original matrix
    TArr[0][1] = 3; // Columns in original matrix
    TArr[0][2] = 0;
    for (i = 0; i < 3; i++)
    {
        printf("\n Enter elements of row %d : ", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]); // Enter elements
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            data = arr[i][j]; // Copies value of element of arr to data
            if (data != 0)    // Checks whether element is not zero
            {
                TArr[k][0] = i; // Row number of the non-zero element
                TArr[k][1] = j; // Column number of the non-zero element
                TArr[k][2] = data;
                k++;          // Increases the count of rows
                TArr[0][2]++; // Increases the count of non-zero numbers
            }
        }
    }

    printf("\n Written by Kevin ");
    printf("\n");

    for (i = 0; i < k; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", TArr[i][j]); // Prints all non-zero elements with their row and column no. from arr[][]
        }
        printf("\n"); // Go to new line for formatting purposes
    }
    return 0;
}
