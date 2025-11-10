#include <stdio.h>

/**
 * Program to sort a given array
 * C implementation of the merge sort algorithm
 * @author - Gareth Bennett
*/




int main()
{
    printf("Merge Sort Implementation");

    // Declare and initialise an unsorted array
    int array[] = {10, 23, 42, 12, 6, 89, 101, 47, 9, 194};

    // get the length of the array
    int size = sizeof(array) / sizeof(array[0]);

    // Print the unsorted array
    printf("The unsorted array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    
    // Recursively break down the array until single elements

    // Merge the sub arrays back into the array

    // Copy the remaining elements if any exist
    
    // Print the sorted array result

    return 0;
}