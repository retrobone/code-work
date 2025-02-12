// 10.02.2025
#include <stdio.h>

int main()
{
    int arr[5] = {41, 84, 21, 18, 17}, loc, i;
    printf("\n Enter location : "); // Enter location to replace
    scanf("%d", &loc);
    for (i = 0; i < loc; i++) // Run loop from start till location
    {
        arr[i] = arr[i + 1]; // Replace current element with succeeding element
    }
    printf("\n Enter new number : "); // Enter new number at location
    scanf("%d", &arr[i]);
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", arr[i]); // Print new array with inserted element
    }
    return 0;
}
