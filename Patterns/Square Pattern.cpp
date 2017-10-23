#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n; //Input n to create a n*n square of stars (*)

	for( int i = 0; i < n; i++ ){     //Loop to iterate over 'n' number of rows
		for( int j = 0; j < n; j++ ){   //Loop to iterate over 'n' columns 
			cout << "*";
		}
		cout << endl; // Print next row in new line 
	}
    return 0;

}
/*
At n=5, output:

5

*****
*****
*****
*****
*****

*/
