#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int arr[], int n)
{
    int i, j, smallest;

    for (i = 0; i < n - 1; i++) {
        smallest = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallest])
                smallest = j;
        }
        swap(&arr[smallest], &arr[i]);
    }
}

int main()
{
    int arr[] = { 12, 8, 5, 10, 13, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("\nInput Array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        
    selection_sort(arr, n);

    printf("\nSorted Array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
/* Output
Input Array:
12 8 5 10 13 9 
Sorted Array:
5 8 9 10 12 13
  */