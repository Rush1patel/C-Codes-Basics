#include <stdio.h> // For standard input/output functions (printf, scanf)

void Fibonacci(int num); // Function prototype: declares the Fibonacci function

int main()
{
    int num; // Variable to store the desired number of Fibonacci terms

    // Prompt user for input
    printf("Enter the number of terms in the Fibonacci sequence: \n");
    scanf("%d", &num); // Read an integer from the user

    // Print the sequence header
    printf("Fibonacci Sequence for %d terms:\n", num);
    Fibonacci(num); // Call the function to generate and print the sequence
    printf("\n");   // Add a newline for better formatting after the sequence

    return 0; // Indicate successful program execution
}

// Function definition for Fibonacci
void Fibonacci(int num)
{
    if (num <= 0)
    {
        // Handle cases where no terms or an invalid number of terms are requested
        return;
    }

    // Initialize the first two numbers in the sequence
    int a = 0;
    int b = 1;
    int nextTerm; // To store the next term in the sequence

    // Print the first term if requested
    if (num >= 1)
    {
        printf("%d ", a);
    }

    // Print the second term if requested and if num >= 2
    if (num >= 2)
    {
        printf("%d ", b);
    }

    // Generate and print the rest of the sequence starting from the third term
    for (int i = 2; i < num; i++) // Loop starts from 2 because first two terms might be printed
    {
        nextTerm = a + b;        // Calculate the next Fibonacci number
        printf("%d ", nextTerm); // Print the next term
        a = b;                   // Update 'a' to the previous 'b'
        b = nextTerm;            // Update 'b' to the newly calculated term
    }
}