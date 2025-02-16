// 15.02.2025

#include <stdio.h>

int main()
{
    int TArr[4][3], Arr[4][4], i, j = 1, k = 1, data;
    TArr[0][0] = 3;
    TArr[0][1] = 3;
    TArr[0][2] = 0;
    for (i = 0; i < 3; i++)
    {
        printf("Enter row %d : ", i + 1);
        scanf("%d", &data);
        if (data != 0)
        {
            TArr[k][0] = i + 1;
            TArr[k][1] = j;
            TArr[k][2] = data;
            k++;
            TArr[0][2]++;
            j++;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\t\t%d", TArr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
