#include <stdio.h> // For standard input/output functions (printf, scanf)

long long int Factorial(long long int num); // Function prototype: declares the Factorial function

int main()
{
    long long int num; // Variable to store the user's input number

    // Prompt user for input
    printf("Type a non-negative number to get its Factorial: \n");
    scanf("%lld", &num); // Read a long long integer from the user

    // Handle negative input as factorial is not defined for negative numbers
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate and print the factorial by calling the Factorial function
        printf("Factorial of %lld is %lld\n", num, Factorial(num));
    }

    return 0; // Indicate successful program execution
}

// Function definition for Factorial
long long int Factorial(long long int num)
{
    // Base case: Factorial of 0 is 1.
    // Also handles the loop correctly if num is 0, as the loop won't run.
    long long int fact = 1;

    // Iteratively calculate factorial: fact = 1 * 2 * 3 * ... * num
    for (long long int i = 1; i <= num; i++)
    {
        fact *= i; // Multiply fact by the current number in the sequence
    }
    return fact; // Return the calculated factorial
}