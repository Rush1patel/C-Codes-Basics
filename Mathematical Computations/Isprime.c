#include <stdio.h> // For standard input/output functions (printf, scanf)

int isprime(int a); // Function prototype: declares the isprime function

int main()
{
    int num; // Variable to store the user's input number

    // Prompt user for input
    printf("Type a number to check if it's Prime or Not:\t");
    scanf("%d", &num); // Read an integer from the user

    // Call the isprime function to check and print the result
    // The function itself will handle printing the output.
    isprime(num);

    return 0; // Indicate successful program execution
}

// Function definition for isprime
// This function determines if 'a' is prime and prints the result.
// It doesn't return a value to main to indicate primality.
int isprime(int a)
{
    // Flag to track if the number is prime, 1 for prime, 0 for not prime.
    // (Note: an actual 'int' return value from this function is not used effectively here)
    int isPrimeFlag = 1; // Assume the number is prime initially

    // Numbers less than or equal to 1 are not prime.
    if (a <= 1)
    {
        isPrimeFlag = 0; // Mark as not prime
        // printf("Not a prime Number\n"); // Original printing location
    }
    else
    {
        // Check for factors from 2 up to a-1.
        // A more optimized check would go up to sqrt(a).
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0) // If 'a' is divisible by 'i'
            {
                isPrimeFlag = 0; // The number is not prime
                break;           // No need to check further, a factor is found
            }
        }
    }

    // Print the result based on the isPrimeFlag
    if (isPrimeFlag == 1 && a > 1) // Check a > 1 again because 1 is handled above
    {
        printf("Typed number (%d) is Prime\n", a);
    }
    else
    {
        printf("Typed number (%d) is not prime\n", a);
    }
    // The function is declared to return int, but its return value isn't used.
    // Could return isPrimeFlag if the design was to use the return value in main.
    return isPrimeFlag; // Returning the flag, though not used by the current main()
}