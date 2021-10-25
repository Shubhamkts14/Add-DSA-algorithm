/* QuickSort Implementation */
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* Partition function takes last element as pivot */
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main()
{
    int a[] = {9, 5, 10, 2, 4, 8};
    int len = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, len - 1);

    for (int i = 0; i < len; i++)
    {
        cout << a[i] + " ";
    }

    return 0;
}
