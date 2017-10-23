#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;					// Accept n to construct :  a right triangle with n rows followed by an upside down right triangle with n rows

	for( int i = 0; i < n; i++ ){			// Iterate over the number of rows for first triangle 
		for( int j = 0; j <= i; j++ ){		// Number of stars in a column will be equal to the row number we are at currently.
			cout << "*";			// Print *
		}
		cout << endl; 				// Mover over to the next row
	}

	for( int i = n-1; i > 0; i-- ){			// Iterate backwards from n to 0 to construct an upside down triangle with n rows
		for( int j = 0; j < i; j++ ){		// Number of stars in a column will be equal to the row number we are at currently.
			cout << "*";			// Print *
		}
		cout << endl;				// Move to the next row
	}

    return 0;

}

/*

5

*
**
***
****
*****
****
***
**
*

*/
