//INSERTION SORT
#include<iostream>
#include<climits>                   //ADDING CLIMITS TO GET INT_MIN VALUE
using namespace std;

void inssort(int a[],int n)         //FUNCTION INSERTION SORT TAKING ARGUMENTS ARRAY & SIZE - N
{  int i,j; 
    a[0]=INT_MIN;                   //GIVING FIRST ELEMENT OF ARRAY MINIMUM VALUE
    for(i=1;i<=n;i++)               
    {   
        int t=a[i];         
        j=i-1;
        while(t<a[j])               //CJECKING OF COND & MOVING ELEMENTS
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;                   //PUTTING FINAL ELEMENTS
    }

}
//TIME COMPLEXITY:O(n^2)
//SPACE COMPLEXITY : O(1)

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
    inssort(a,n);                   //CALLING INSERTION SORT FUNCTION
    cout<<endl;              
    for(int i=1;i<=n;i++)
    {   
        cout<<a[i]<<endl;         //PRINTING OF MODIFIED ARRAY
    }
    system("pause");
    delete a;
    return 0;
}
