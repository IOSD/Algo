//C++ program to perform an erase in a vector
//You are provided with a vector of  integers. 
//Then, you are given  queries. For the first query, you are provided with  integer, 
//which denotes a position in the vector. The value at this position in the vector needs to be erased. 
//The next query consists of integers denoting a range of the positions in the vector. 
//The elements which fall under that range should be removed. 
//The second query is performed on the updated vector which we get after performing the first query.

//problem statement link: https://www.hackerrank.com/challenges/vector-erase/problem

32 lines (29 sloc)  582 Bytes
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x-1);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    int s = v.size();
    cout<<s<<endl;
    for(int j=0;j<s;j++){
        cout<<v[j]<<" ";
    }
    return 0;
}
