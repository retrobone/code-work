#include <stdio.h>

int main()
{
    int arr[10], i, j, data, ind, count;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\n Enter element [%d][%d] : ", i, j);
            scanf("\t%d", &data);                                  // Enter element
            if (data != 0 && (j == i || j == i - 1 || j == i + 1)) // Checks j=i for main-diagonal,, j=i-1 for sub-diagonal, j=i+1 for super-diagonal
            {
                ind = 2 * i + j; // Creates index value for element in array
                if (ind < 10)
                {
                    arr[ind] = data;
                    count++; // Increases the count of the elements in array
                }
            }
        }
    }

    printf("\n Tridiagonal elements in 1D array : ");
    for (i = 0; i < count; i++)
    {
        printf("\t%d", arr[i]); // Prints the 1D array
    }
    return 0;
}
