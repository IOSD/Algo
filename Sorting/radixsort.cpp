#include<iostream>
using namespace std;

void countSort(int arr[], int n, int exp){
    int output[n+1]; // output array
    int i,freq[10] = {0};
    for(i=0;i<n;i++)
        freq[(arr[i]/exp)%10]++;
    for(i=1;i<10;i++)
        freq[i]+=freq[i-1];
    for(i=n-1;i>=0;i--){
        output[freq[(arr[i]/exp)%10]-1]=arr[i];
        freq[(arr[i]/exp)%10]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixsort(int arr[], int n)
{
    int m = arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>m)
            m=arr[i];
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
void print(int arr[],int n){
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixsort(arr, n);
    print(arr, n);
    return 0;
}

