//https://www.hackerrank.com/challenges/designer-pdf-viewer

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


int main()
{
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++) cin >> h[h_i];
    
    string word;
    cin >> word;
    
    int n = word.size();
    vector<int> letters(n);
    for (int i=0; i<n; i++) letters[i] = word[i] - 97;
    
    int max = h[letters[0]];
    for (int i=1; i<n; i++)
        if (max < h[letters[i]]) max = h[letters[i]];
    
    cout << max * n;
    
    return 0;
}