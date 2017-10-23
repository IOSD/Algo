#include <iostream>
using namespace std;

int main(){
	
	/* Accept the number of rows to be printed */
	int n;
	cin >> n;

	/* Initialise the number to be printed */
	int count = 1;
	
	/* Begin printing numbers from 1 to n */
	
	/* Print a row
	 * Number of elements in a row = row count.
	 * eg. row1 has 1 element, row 2 has 2 elements,
	 */
	for( int i = 0; i < n; i++ ){
		/* Print the numbers in a particular row. 
		 * Each number is followed by a single space
		 */
		for( int j = 0; j <= i; j++ ){
			cout << count << " ";
			count++;
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
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/
