// C++ program to implement a sort in vectors
//Problem statement link: https://www.hackerrank.com/challenges/vector-sort/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> v1;
    int 5;
   
    for(int j=0;j<k;j++){
        int num;
        cin>>num;
        v1.push_back(num);
    }
    sort(v1.begin(),v1.end());
    int s = v1.size();
    for(int i=0;i<s;i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}
