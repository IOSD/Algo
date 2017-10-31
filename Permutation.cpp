//programme for permutation of string
#include <iostream>
using namespace std;

//recurssive programme for computating permutation
void printPerm(char *input,int i){
		
	if(input[i]=='\0'){
		cout<<input<<endl;
		return ;
	}
	for(int j=i;input[j]!='\0';j++){
		swap(input[i],input[j]);
		printPerm(input,i+1);
		
		//swap again to maintain the order in the recurssive stack to get correct answer
		swap(input[i],input[j]);
	}

}

int main(){
	
	//Input a string

	char input[]="abcd";
	printPerm(input,0);
	
	return 0;
}