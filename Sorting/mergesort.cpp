#include<iostream>
using namespace std;

/*	Merges two subarrays of Arr[]
	First subarray is Arr[l .. m]
	Second subarray is Arr[m+1 .. r] */
void merge(int Arr[], int l, int m, int r)
{
	int n1 = m - l + 1;		//Size of the first subarray
	int n2 = r - m;			//Size of the second subarray

	int L[n1], R[n2];		//Temporary arrays
	
	//Copy data to the temporary arrays
	for(int i = 0; i < n1; i++)
		L[i] = Arr[l + i];
	for(int i = 0; i < n2; i++)
		R[i] = Arr[m + 1 + i];

	//Merge the temp arrays back into Arr[l .. r]
	int i = 0;				//Initial index of first subarray
	int j = 0;				//Initial index of second subarray
	int k = l;				//Initial index of merged subarray
	while( (i < n1) && (j < n2))
	{
		if(L[i] <= R[j])
		{
			Arr[k] = L[i];
			i++;
		}
		else
		{
			Arr[k] = R[j];
			j++;
		}
		k++;
	}

	//Copy the remaining elements of L[], if any
	while(i < n1)
	{
		Arr[k] = L[i];
		i++;
		k++;
	}

	//Copy the remaining elements of R[], if any
	while(j < n2)
	{
		Arr[k] = R[j];
		j++;
		k++;
	}
}


/*	l is for left index and r is right index of the subarray of Arr to be sorted */
void mergeSort(int Arr[], int l, int r)
{
	if(l < r)
	{
		//Calculating mid position
		//Same as (l+r)/2 but avoids overflow for large l and r
		int m = l + (r-l)/2;

		//Divide the array into 2 halves to solve
		mergeSort(Arr, l, m);
		mergeSort(Arr, m+1, r);

		//Merge the divided arrays
		merge(Arr, l, m, r);
	}
}


/*	UTILITY FUNCTIONS */

/*	Function to print an array
	Inline function as it is short and might be called often */
inline void printArray(int Arr[], int size)
{
	for(int i = 0; i < size; i++)
		cout<<Arr[i]<<" ";
	cout<<"\n";
}

/*	Main program to test the above functions */
int main()
{
	int Arr[] = {12, 11, 13, 5, 6, 7};

	//Calculating the size(number of elements) of the array
	int size = sizeof(Arr) / sizeof(Arr[0]);
	
	//Printing the original array
	cout<<"Original Array: ";
	printArray(Arr, size); 

	//Calling Merge Sort on the complete array(0 .. size-1)
	mergeSort(Arr, 0, size - 1);

	//Printing the sorted array
	cout<<"Sorted Array: ";
	printArray(Arr, size);

	return 0;
}