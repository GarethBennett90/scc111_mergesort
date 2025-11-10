#include <stdio.h>
#include <stdlib.h>

/**
 * Program to sort a given array
 * C implementation of the merge sort algorithm
 * @author - Gareth Bennett
*/

// Function to merge the sub arrays
void merge(int array[], int left, int mid, int right)
{
    // Get sizes of the sub arrays
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    // Create temporary arrays
    int tempLeftArray[leftSize];
    int tempRightArray[rightSize];

    // Copy data into the temp arrays
    for (int i = 0; i < leftSize; i++)
        tempLeftArray[i] = array[left + i];

    for (int i = 0; i < rightSize; i++)
        tempRightArray[i] = array[mid + 1 + i];

    // Merge the temp arrays back into array
    int i = 0, j = 0, k = left;

    while (i < leftSize && j < rightSize)
    {
        // Check which sub array value is greater
        if (tempLeftArray[i] <= tempRightArray[j])
        {
            array[k] = tempLeftArray[i];
            i++;
        }
        else 
        {
            array[k] = tempRightArray[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left if any
    while (i < leftSize)
    {
        array[k] = tempLeftArray[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        array[k] = tempRightArray[j];
        j++;
        k++;
    }
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
    mergeSort(array, 0, size -1);
    
    // Print the sorted array result
    printf("The sorted array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return EXIT_SUCCESS;
}