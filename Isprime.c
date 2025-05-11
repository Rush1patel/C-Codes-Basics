#include <stdio.h>

/**
 * Checks if a number is prime.
 *
 * @param a The number to check.
 */
int isprime(int a);

int main()
{
    // Prompt user for input
    int num;
    printf("Type a number to check if it's Prime or Not:\t");
    scanf("%d", &num);

    // Call the isprime function
    isprime(num);
    return 0;
}

int isprime(int a)
{
    // Assume the number is prime initially

    int isprime = 1;

    // Check if the number is less than or equal to 1
    if (a <= 1)
    {
        printf("Not a prime Number\n");
    }
    else
    {
        // Iterate from 2 to a-1 to check for divisibility
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                // If divisible, set isprime to 0 and break the loop
                isprime = 0;
                break;
            }
        }

        // Print the result based on the isprime flag
        if (isprime == 0)
        {
            printf("Typed number is not prime\n");
        }
        else
        {
            printf("Typed number is Prime\n");
        }
    }
}
