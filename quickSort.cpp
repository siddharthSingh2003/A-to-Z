#include <iostream>

// Function to partition the array into two subarrays
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Choose the pivot as the last element
    int i = (low - 1);     // Index of the smaller element

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i+1] and arr[high] (pivot)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

// Quicksort function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Find the pivot element such that
        // element smaller than the pivot are on the left
        // element greater than the pivot are on the right
        int pi = partition(arr, low, high);

        // Recursively sort the elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    quickSort(arr, 0, n - 1);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
