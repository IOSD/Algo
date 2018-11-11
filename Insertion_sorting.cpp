//Sachin Singla

#include <iostream>
using namespace std;

int main(){
	int n;	//n is the number of elements entered by the user
	cin >> n;
	int arr[100];		//User must enter less than 100 elements

	//input n elements from the user
	for(int i = 0; i < n; ++i) 
  cin >> arr[i];

	//INSERTION SORT
	//sort all elements from [1, N-1]
	for(int i = 1; i < n ; ++i){
		int curEle = arr[i];
		int st = i - 1;	//st is the start of the range towards left
		
    while(st >= 0){
			if (arr[st] > curEle){
				arr[st + 1] = arr[st];	//shifting
				--st;	//move to left
			}
			
      else{
				break;
				//means we have found an element smaller than curEle
				//which is located at st
				//It means the curEle must be inserted at st+1
			}
		}
    
		arr[st + 1] = curEle;
	}

	//We have thus sorted the array effectively
	for(int i = 0; i < n; ++i) cout << arr[i] << " ";

	return 0;
}
