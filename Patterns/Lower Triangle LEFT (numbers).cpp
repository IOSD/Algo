#include <iostream>
using namespace std;

int main(){

	/* Accept the number of rows to be printed */
	int n;
	cin >> n;

	/* Print a row
	 * Number of elements in a row = row count.
	 * eg. row1 has 1 element, row 2 has 2 elements, so on...
	 */
	for( int i = 1; i <= n; i++ ){
		/* Print the same number repeatedly */
		for( int j = 1; j <= i; j++ ){
			cout << i;
		}
		/* Once all the numbers of a row a printed,
		 * print a newline before starting the next row.
		 */
		cout << endl;
	}

    return 0;
}

/*

5

1
22
333
4444
55555

*/
