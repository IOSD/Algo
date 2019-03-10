//BINARY SEARCH ALGORITHM
#include<iostream>

using namespace std;

int binsearch(int a[],int n,int no) //FUNCTION FOR BINARY SEARCH TAKING ARRAY, SIZE AND NO. TO BE SEARCHED AS ARGUMENTS
{
    int pos=-1,beg=0,last=n-1,mid;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(a[mid]==no)
        {
            pos=mid;
            break;
        }
        if(a[mid]>no)
            last=mid-1;
        else
            beg=mid+1;
    }
    return(pos);
}

//TIME COMPLEXITY : O(log n)
//SPACE COMPLEXITY : O(1)

int main()
{
    int *b,n,no;
    cout<<"Enter NO. of elements:";
    cin>>n;                             //NO. OF ELEMENTS
    b=new int[n];                      //DYNAMIC INITIALISATION OF ARRAY
    for(int i=0;i<n;i++)
        cin>>b[i];
    cout<<"\nEnter NO. to be searched:";
    cin>>no;                            //NO. TO BE SEARCHED
    no=binsearch(b,n,no);               //CALLING FUNCTION BINSEARCH
    if(no==-1)
        cout<<"\nNO. not found.";
    else
        cout<<"\nNO. found at position:"<<no+1;
        delete b;
        return 0;

}

