//Time complexity-O(loglog(n))
#include<iostream> 
using namespace std;

#define ll long long int


void ETF(int n) 
{ 

	ll phi[n+1]; 
	for (int i=1; i<=n; i++) 
		phi[i] = i; //initialize all array elements with indices 


	for (int p=2; p<=n; p++) 
	{ 
		//if phi[p] ==p implies phi[p] is not calculated and it is prime
		if (phi[p] == p) 
		{ 
			//etf of prime p=p-1
			phi[p] = p-1; 

			
			for (int i = 2*p; i<=n; i += p) 
			{ 
			//calculating from the formula
			phi[i] = (phi[i]/p) * (p-1); 
			} 
		} 
	} 

	// Printing phi values 
	for (int i=1; i<=n; i++) 
	cout << "Totient of " << i << " is "
		<< phi[i] << endl; 
} 

// Driver program to test above function 
int main() 
{ 
	int n = 10; 
	ETF(n); 
	return 0; 
} 
