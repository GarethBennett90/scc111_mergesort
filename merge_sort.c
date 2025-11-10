#include <stdio.h>

/**
 * Program to sort a given array
 * C implementation of the merge sort algorithm
 * @author - Gareth Bennett
*/

// Function to merge the sub arrays
void merge(int array[], int left, int mid, int right)
{
    // Get sizes of the sub arrays

    // Create temporary arrays

    // Copy data into the temp arrays

    // Merge the temp arrays back into array

    // Copy remaining elements of left if any
}

// Function to recursively break down the array
void mergeSort(int array[], int left, int right)
{
    // Check if left is less than or equal to right
    if (left < right)
    {
        // Find the middle point
        int mid = left + (right - left) / 2;

        // Recursively divide the left and right sides
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        // And merge the sub arrays
        merge(array, left, mid, right);
    }
}


int main()
{
    printf("Merge Sort Implementation\n");

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