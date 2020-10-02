#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int binarySearch(int a[],int l,int r,int x)
{
    if(l>r)
        return -1;
    int mid=(l+r)/2;
    if(a[mid]==x)
        return mid;
    if(a[mid]<x)
        return binarySearch(a,mid+1,r,x);
    return binarySearch(a,l,mid-1,x);
}
int main()
{
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    int x;cin>>x;
    int res=binarySearch(a,0,N-1,x);
    if(res==-1)
        cout<<"Not found";
    else
        cout<<"found at "<<res;
    return 0;
}
