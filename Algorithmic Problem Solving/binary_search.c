#include <stdio.h> // Includes the standard input-output library for functions like printf

int main() // Defines the main function, the entry point of the program
{
    // Declares and initializes an integer array 'arr' with 7 elements
    int arr[] = {23, 54, 22, 904, 754, 453, 455};

    // Defines the target value to search for in the array
    int target = 904;

    // Calculates the length of the array by dividing the total size of the array
    // by the size of a single element
    int length = sizeof(arr) / sizeof(arr[0]);

    // Initializes a flag to track whether the target is found (0 = not found, 1 = found)
    int found = 0;

    // Starts a for loop to iterate through the array from index 0 to length-1
    for (int i = 0; i < length; i++)
    {
        // Checks if the current array element equals the target value
        if (arr[i] == target)
        {
            // Prints a message indicating the target was found
            printf("Target found !!\n");

            // Prints the index where the target was found
            printf("Target is located at index %d in the array.\n", i);

            // Sets the found flag to 1 to indicate the target was found
            found = 1;

            // Exits the loop early since the target has been found
            break;
        }
    }

    // Checks if the target was not found (found is still 0)
    if (!found)
    {
        // Prints a message indicating the target was not found
        printf("Target not found!\n");
    }

    // Returns 0 to indicate successful program execution
    return 0;
}