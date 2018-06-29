#include<iostream>

using namespace std;
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main()                          //MAIN BODY
{
    int *a,n,i;
    cout<<"Enter No OF Units : ";
    cin>>n;                         // TAKING INPUT OF SIZE OF ARRAY
    a=new int[n+1];
    for(int i=1;i<=n;i++)            //INPUT OF ARRAY
    {
        cin>>a[i];
    }
    insertionSort(a,n);                   //CALLING INSERTION SORT FUNCTION
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;         //PRINTING OF MODIFIED ARRAY
    }
   
    delete a;
    return 0;
}
