//SELECTION SORT IN ASCENDING ORDER.
#include<iostream>
using namespace std;
void selsort(int a[],int n)         //FUNCTION TO PERFORM SELECTION SORT TAKING INPUT OF ARRAY & SIZE
{   for(int i=0;i<n;i++)            
    {   for(int j=i;j<n;j++)        //FOR LOOP FOR COMPARING I TH ELEMENT WITH EVERY OTHER SUCEEDING ELEMENT
            {   if(a[i]>a[j])
                {                   //SWAPPING OF VALUES
                    a[i]=a[i]+a[j];
                    a[j]=a[i]-a[j];
                    a[i]=a[i]-a[j];
                }
            }
    }
}
//TIME COMPLEXITY : O(n^2)
//SPACE COMPLEXITY : O(1)

int main()                          //MAIN FUNCTION
{   int *arr,n;                     //INITIALISATION OF VARIABLES
    cout<<"Enter No Of Units :";
    cin>>n;                         //TAKING INPUT OF SIZE OF ARRAY
    arr=new int[n];                 //DYNAMIC INITIALISATION OF ARRAY
    for(int i=0;i<n;i++)            //INPUT OF ARRAY
    {   
        cin>>arr[i];
    }
    cout<<endl;
    selsort(arr,n);                 //CALLING OF FUNCTION SELSORT
    for(int i=0;i<n;i++)
    {   
        cout<<arr[i]<<endl;         //PRINTING OF MODIFIED ARRAY
    }
    system("pause");
    return 0;

}