// 10.02.2025

#include <stdio.h>

int main()
{
    int a = 3, b = 5, sum = 0, num, i;
    printf("\n Enter number : "); // Take number from user
    scanf("%d", &num);
    for (i = 1; i < num - 1; i++)
    {
        if (num % a == 0 || num % b == 0) // Runs the condition if the number is divisble by 3 or 5
        {
            sum += i; // Adds the multiple to the sum
        }
    }
    printf("\n Sum of multiples of 3 & 5 below %d = %d", num, sum); // Prints the sum of the multiples of 3 & 5 below a specific number
    return 0;
}
