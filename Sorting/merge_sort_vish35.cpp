#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int next_gap(int n)
{
	if(n<=1)
	return 0;
	return (n/2)+(n%2);
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<m;i++)
		cin>>b[i];
		int gap=n+m;
		int i,j;
		for(gap=next_gap(gap);gap>0;gap=next_gap(gap))
		{
			for(i=0;i+gap<n;i++)
			{
				if(a[i]>a[i+gap])
				swap(a[i],a[i+gap]);
			}
			for(j=gap>n?gap-n:0;i<n&&j<m;i++,j++)
			{
				if(a[i]>b[j])
				swap(a[i],b[j]);
			}
			if(j<m)
			{
				for(j=0;j+gap<m;j++)
				{
					if(b[j]>b[j+gap])
					swap(b[j],b[j+gap]);
				}
			}
		}
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		for(int i=0;i<m;i++)
		cout<<b[i]<<" ";
		
		cout<<"\n";
	}
	return 0;
}
