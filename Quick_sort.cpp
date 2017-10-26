/* implementation of QuickSort */
#include<iostream>
using namespace std;


void swap(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
       
        if (arr[j] <= pivot)
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
        int pi = partition(arr, low, high);
 
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
//time complexity:
//worst case : O(n^2)
//avg case   : O(nLogn)
//space complexity (worst): O(n)
//  ..     ..      (avg.) :O(log n)
 
void printArray(int arr[], int size)
{
    cout<<'[';
    for (int i=0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<"]\n";
}
int main()
{
    int arr[] = {100, 77, 89, 90, 10, 52};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
