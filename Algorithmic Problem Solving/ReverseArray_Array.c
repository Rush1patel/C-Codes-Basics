#include <stdio.h>  // For standard input/output functions (printf, fgets)
#include <string.h> // For string manipulation functions (strlen, strcspn)

// Function to reverse a string in place
void reverseString(char str[])
{
    int length = strlen(str); // Get the length of the string
    char temp;                // Temporary variable for swapping characters

    // Iterate up to the middle of the string
    for (int i = 0; i < length / 2; i++)
    {
        // Swap characters: str[i] with str[length - 1 - i]
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
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