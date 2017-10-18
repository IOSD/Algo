#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    // Base case
    if (n == 1)
        return;

    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);

    // Largest element is fixed,
    // recur for remaining array
    bubbleSort(arr, n-1);
}
int main()

{
    int n;int *arr;
    cin>>n;
    arr=new int[n]; //dynamic initialization of the  array
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bubbleSort(arr,n);
    printf("Sorted array : \n");
    for(int j=0;j<n;j++)
    {
        cout<<arr[j];
    }

    return 0;
}
