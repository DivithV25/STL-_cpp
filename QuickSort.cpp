#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int count = 0;
    for (int i = low + 1; i <= high; i++)
    {
        if (pivot >= arr[i])
        {
            count++;
        }
    }
    int pivotindex = count + low;
    swap(arr[pivotindex],arr[low]);
    int i = low, j = high;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
            swap(arr[i++], arr[j--]);
    }
    return pivotindex;
}

void quicksort(int *arr, int low, int high)
{
    if (low >= high)
        return;

    int p = partition(arr, low, high);
    quicksort(arr, low, p - 1);
    quicksort(arr, p + 1, high);
}

int main()
{
    int arr[5] = {3,2,5,4,3};
    int n = 5;
    quicksort(arr, 0, n - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}