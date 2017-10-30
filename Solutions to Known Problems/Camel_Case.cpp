/*Hackerrank problem of No. of words in a string https://www.hackerrank.com/challenges/camelcase/problem**/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    int count=1;
    int k=s.length();
    for(int i=0;i<k;i++)
    {
        if(isupper(s[i])){count++;}
    }cout<<count;
    return 0;
}
