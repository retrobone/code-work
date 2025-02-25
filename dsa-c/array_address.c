#include <stdio.h>

int main()
{
    int arr[4][5], i, j;
    for (i = 0; i < 4; i++)
    {
        printf("\n Enter elements of row %d : ", i + 1);
        for (j = 0; j < 5; j++)
        {
            scanf("\t%d", &arr[i][j]); // Enter elements
        }
    }
    int *loc = (int *)arr + ((2 * 5) + 3);                        // Calculate address by row-major formula
    printf("\n Compiler address of arr[2][3] is %d", &arr[2][3]); // Prints compiler address
    printf("\n Commuted address of arr[2][3] is %d", loc);        // Prints calculated address
    return 0;
}
