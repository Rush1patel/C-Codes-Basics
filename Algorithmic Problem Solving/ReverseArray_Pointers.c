#include <stdio.h>  // For standard input/output functions (printf, fgets)
#include <string.h> // For string manipulation functions (strlen, strcspn)

// Function to reverse a string in place
void reverseString(char *str)
{
    int length = strlen(str); // Get the total length of the string
    int start = 0;            // Index of the first character
    int end = length - 1;     // Index of the last character
    char temp;                // Temporary variable for swapping

    // Loop until the start index crosses or meets the end index
    while (start < end)
    {
        // Swap the characters at the start and end positions
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the start index forward and the end index backward
        start++;
        end--;
    }
}

int main()
{
    char input[100]; // Buffer to store user input

    // Prompt user for input
    printf("Enter a string: ");

    // Read string input safely using fgets
    fgets(input, sizeof(input), stdin);

    // Remove the trailing newline character read by fgets
    // strcspn finds the first occurrence of '\n'
    input[strcspn(input, "\n")] = '\0'; // Replace '\n' with null terminator

    printf("Original string: %s\n", input);

    // Call the function to reverse the string
    reverseString(input);

    printf("Reversed string: %s\n", input);

    return 0; // Indicate successful execution
}