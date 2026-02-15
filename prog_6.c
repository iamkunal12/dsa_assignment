#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void minHeapify(int arr[], int n, int i)
 {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i) {
        swap(&arr[i], &arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

void buildMinHeap(int arr[], int n) 
{
    for (int i = n / 2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);
}

void maxHeapify(int arr[], int n, int i) 
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) 
    {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) 
{
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);
}

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() 
{
    int arr1[] = {10, 20, 15, 30, 40};
    int n = 5;

    int arr2[] = {10, 20, 15, 30, 40};

    buildMinHeap(arr1, n);
    printf("Min Heap:\n");
    printArray(arr1, n);

    buildMaxHeap(arr2, n);
    printf("Max Heap:\n");
    printArray(arr2, n);

    return 0;
}
