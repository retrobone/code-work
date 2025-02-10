// 10.02.2025 
#include <stdio.h>

int main()
{
    int arr[5] = {11, 48, 16, 47, 59}, loc, i;
    printf("\n Enter location :"); // Enter the location to insert
    scanf("%d", &loc);
    for (i = 4; i > loc; i--) // Running loop to count from backwards until it reaches the location
    {
        arr[i] = arr[i - 1]; // Replaces the current element with the preceding element, basically shifting elements to the right
    }
    printf("\n Enter new number : ");
    scanf("%d", &arr[i]); // Inserts new element in the location
    for (i = 0; i < 5; i++)
    {
        printf("\n %d", arr[i]); // Prints the new array with the new inserted element
    }
    return 0;
}
