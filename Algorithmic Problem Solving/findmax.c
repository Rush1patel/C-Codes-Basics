// Include the standard input/output library for functions like printf.
#include <stdio.h>

// Define the main function, the program's entry point.
int main()
{
    // Declare and initialize an integer array 'str' with 5 elements.
    int str[5] = {23, 53, 87, 11, 45};
    // Declare an integer variable 'max' and initialize it to 0 to store the largest number.
    int max = 0;

    // Start a loop that iterates from i = 0 up to (but not including) 5.
    for (int i = 0; i < 5; i++)
    {
        // Check if the current 'max' is less than the current array element str[i].
        if (max < str[i])
        {
            // If str[i] is larger, update 'max' to this new larger value.
            max = str[i];
        }
    }
    // Print the final value of 'max', which is the largest number found.
    printf("Largest number in string is  %d ", max);
    // Indicate successful program termination by returning 0.
    return 0;
}