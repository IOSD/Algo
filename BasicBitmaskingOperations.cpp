#include <iostream>
using namespace std;

// Function for extracting ith bit of a number
int extractBit(int n, int i){
	int mask = 1<<i ;			// left-shifting 1 by i places

	if( (n&mask) != 0 )
		return 1;
	else
		return 0;
}
// Setting ith bit of a number
int setBit(int n, int i){
	int mask = 1<<i ;			// left-shifting 1 by i places

	return n|mask;
}
// Clearing ith bit of a number
int clearBit(int n, int i){
	int mask = ~(1<<i) ;		// negating the binary number after left-shifting 1 by i places

	return n&mask;
} 
int main(int argc, char const *argv[])
{
	int n,i;
	cin>>n>>i;
	
	cout<<"The "<<i<<"th bit of "<<n<<" is "<<extractBit(n,i)<<endl;
	cout<<"Number after setting the "<<i<<"th bit of "<<n<<" is "<<setBit(n,i)<<endl;
	cout<<"Number after clearing the "<<i<<"th bit of "<<n<<" is "<<clearBit(n,i)<<endl;

	return 0;
}