#include <stdio.h>

/**
 * Generates the Fibonacci sequence up to a specified number of terms.
 *
 * @param num The number of terms in the sequence.
 */
void Fibonacci(int num);

int main()
{
    // Prompt user for input
    int num;
    printf("Enter the number of terms in the Fibonacci sequence: \n");
    scanf("%d", &num);

    // Print the sequence
    printf("Fibonacci Sequence : \n");
    Fibonacci(num);
    return 0;
}

void Fibonacci(int num)
{
    // Initialize the first two numbers in the sequence
    int a = 0, b = 1, sum;

    // Print the first two numbers
    printf("%d %d ", a, b);

    // Generate the rest of the sequence
    for (int i = 2; i < num; i++)
    {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }
}
