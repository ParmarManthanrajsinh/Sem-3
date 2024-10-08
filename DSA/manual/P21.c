/*
Algorithm for Quick sort method.

step 1: Read arr[], low , high , partiton_index

step 2: if (low < high)
            step 3

step 3: partiton_index = call partition (arr , low , high)
        self call (arr , low , partiton_index - 1)
        self call (arr , partiton_index + 1, high)



Algorithm for partition method.

step 1: Read arr[], low , high
        pivot = arr[low], i = low + 1, j = high

step 2: repeat step 3 untill (i < j)

step 3: repeat (i = i + 1) untill (arr[i] <= pivot)
        repeat (j = j - 1) untill (arr[j] > pivot)
        if (i < j)
            swap arr[i] and arr[j]

step 4: swap arr[low] and arr[j]

step 5: return j

*/

#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partitionIndex;

    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main()
{
    int arr[] = {11, 23, 76, 32, 56, 32, 89};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}