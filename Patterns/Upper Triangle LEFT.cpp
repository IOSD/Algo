#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;

	for( int i = n; i > 0; i-- ){ //Iterating over number of rows backwards from n down to 0
		for( int j = 0; j < i; j++ ){ // Number of columns with * will be equal to row number to form an upside down triangle
			cout << "*";
		}
		cout << endl;
	}

    return 0;
}

/*
5

*****
****
***
**
*

*/
