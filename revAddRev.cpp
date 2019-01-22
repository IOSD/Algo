#include<iostream>

using namespace std;

int main()
{
    int t, a, b, i, re1, re2, n;
    cin>>t;
    for(i=0;i<t;i++)
    {

        cin>>a>>b;
        re1=0;
        re2=0;
         while (a != 0)
   {
      re1 = re1 * 10;
      re1 = re1 + n%10;
      a       = a/10;
   }
    while (b != 0)
   {
      re2 = re2 * 10;
      re2 = re2 + n%10;
      b       = b/10;
   }

   n=re1+re2;
   re1=0;

    while (n != 0)
   {
      re1 = re1 * 10;
      re1 = re1 + n%10;
      n       = n/10;
   }
   cout<<re1;
    }
    return 0;


}
