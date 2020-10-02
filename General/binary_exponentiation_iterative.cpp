#include <iostream>
using namespace std;

#define ll long long int

int bexp(ll a,ll b){
  int res=1; //initializing result to 1
  while(b>0){
    if(b&1)
      res*=a;  //if b is odd then increasing res by a factor of a
     a=a*a; //ans in all case squaring a to get value of a^2-->a^4-->a^8-->a^16 and so on
     b=b/2; //dividing b by 2
  }
  return res;
}

int main(){
ll a,b; //calculating a^b
cin>>a>>b;

int ans=bexp(a,b);
cout<<ans<<endl;

return 0;
}
