//BUBBLE SORT ALGORITHM
#include<iostream>
using namespace std;

void bsort(int a[],int n)       //FUNTION FOR BUBBLE SORT TAKING ARRAY AND IT'S SIZE AS ARGUMENTS
{
    int t;
    for(int i=1;i<n;i++)
        for(int j=0;j<n-i;j++)
            if(a[j+1]<a[j])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
}

//TIME COMPLEXITY : О(n^2)
//SPACE COMPLEXITY : O(1) auxiliary

int main()
{
    int *b,n;
    cout<<"Enter NO. of elements:";
    cin>>n;                             //NO. OF ELEMENTS
    b=new int[n];                      //DYNAMIC INITIALISATION OF ARRAY
    cout<<"\nEnter the array:";
    for(int i=0;i<n;i++)                //INPUT OF ARRAY
        cin>>b[i];
    bsort(b,n);                         //CALLING FUNCTION SSORT
    cout<<"\nSorted Array:";
    for(int i=0;i<n;i++)                //DISPLAY OF SORTED ARRAY
        cout<<b[i]<<"\n";
    return 0;
    
}


