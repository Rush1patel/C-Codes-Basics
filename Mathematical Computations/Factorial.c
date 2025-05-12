#include <stdio.h>

/**
 * Calculates the factorial of a given number.
 *
 * @param num The number to calculate the factorial for.
 */
long long int Factorial(long long int num);

int main()
{
    // Prompt user for input
    long long int num;
    printf("Type a number to get its Factorial: \n");
    scanf("%lld", &num);

    // Calculate and print the factorial
    printf("Factorial of typed number is %lld", Factorial(num));
    return 0;
}
long long int Factorial(long long int num)
{
    // Initialize factorial result
    long long int fact = 1;

    // Calculate factorial
    for (long long int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
