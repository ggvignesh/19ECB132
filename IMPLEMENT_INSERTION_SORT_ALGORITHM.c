#include <stdio.h>

void insertion(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++) {
        int key = arr[i];
        j = i - 1;
        while (key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
    printf("\nAfter performing Insertion sort:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{

    int arr[] = { 10, 14, 3, 8, 5, 12, 16, 13 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion(arr, n);

    return 0;
}
/* Output
After performing Insertion sort:
3 5 8 10 12 13 14 16
  */