//Krishna Rai
#include<iostream>
using namespace std;

long long int FastExpo(int b, int p)
{
	/if the power is 0 return 1
	if(!p)
	{
		return 1;
	}
	
	/if power is odd, then power is reduce by 1 to make odd and base is multiplied seprately
	if(p%2!=0)
	{
		return FastExpo(b,p-1)*b;
	}
	
	int res=FastExpo(b,p/2);
	return res*res;
}

int main()
{
	int base,power;
	cin>>base>>power;

	cout<<FastExpo(base,power);
	return 0;
}
