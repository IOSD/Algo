//https://www.hackerrank.com/challenges/priyanka-and-toys

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> toys(n);
    for (int i=0; i<n; i++) cin >> toys[i];
    
    sort(toys.begin(), toys.end());
    
    vector<int> sol(1);
    int index = 0;
    for (int i=0; i<n; i++)
    {
        if (toys[i] - toys[index] <= 4) sol[sol.size() - 1] ++;
        else
        {
            index = i;
            sol.push_back(1);
        }
    }
    cout << sol.size() << endl;
        
    return 0;
}