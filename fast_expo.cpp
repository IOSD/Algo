#include<iostream>
using namespace std;      //Time complexity : O(logn)
int func(int a,int n)
{
   if(n==0) return 1;
   else if(n%2==0)
    {
        int y = func(a,n/2);
      return y*y;
    }
   else if(n%2!=0)    
    {
      return a*func(a,n-1);
    }
}
int main()
{  int n,a;
   cin>>a>>n;
   int res= func(a,n);
   cout<<res<<endl;
   return 0;
}
