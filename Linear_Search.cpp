//LINEAR SEARCH ALGORITHM
#include<iostream>
using namespace std;
int linsearch(int a[],int b,int c)  //FUNCTION FOR LINEAR SEARCH TAKING ARRAY , SIZE, NO TO FIND AS ARGUMENTS
{
    for(int i=0;i<b;i++)         
    {   if(a[i]==c)                 //CHECKING OF CONDITION TO FIND VARIABLE
            return (i+1);
    }
    return -1;
}
//TIME COMPLEXITY : O(n)
//SPACE COMPLEXITY :O(1)
int main()
{
    int *arr,n,k;                   //INIT. OF ARRAY
    cout<<"Enter no of Entries:";
    cin>>n;                         //INPUT OF NO OF ENTRIES IN ARRAY
    arr=new int[n];                 //DYNAMIC INITIALISATION OF ARRAY
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];                //INPUT OF ARRAY
    }
    cout<<"ENTER NO TO BE SEARCHED";
    cin>>k;                         //NO TO BE SEARCHED
    k=linsearch(arr,n,k);           //CALLING OF FUCTION LINSEARCH
    if(k==-1)                       //  IF RETURNS -1 -> NOT FOUND ELSE PRINTING POSITION
        cout<<"NOT FOUND";
    else
        cout<<"POSITON : "<<k<<endl;
    system("pause");
    delete arr;
    return 0;

}
