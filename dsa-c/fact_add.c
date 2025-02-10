//10.02.2025

#include <stdio.h>

int main()
{
    int num, fact = 1, sum = 0, rem = 0, i, temp;
    printf("\n Enter number : "); // Enter number
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i; // Calculate factorial
    }
    printf("\n Factorial of %d = %d", num, fact);
    temp = fact;      // Assign factorial value to temp
    while (temp != 0) // Run the loop while temp isn't 0
    {
        rem = temp % 10;  // Finds remainder
        sum += rem;       // Adds remainder to sum
        temp = temp / 10; // Divides temp by 10
    }
    printf("\n Sum of factorial of %d is %d", num, sum); // Prints the sum of the factorial of the number
    return 0;
}
