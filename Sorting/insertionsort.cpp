#include<iostream>
using namespace std;

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>=1;j--){
            if (a[j]<a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            else
                break;
        }
    }
}

int main(){
    int a[5]={4,3,2,1,0};
    insertionSort(a,5); //insertionSort(array,size)
    for(int i=0;i<5;i++){
        cout<<a[i]<<"\n";
    }
    return 0;}

