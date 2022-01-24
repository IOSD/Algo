//https://www.hackerrank.com/challenges/counting-valleys

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int count;
    cin >> count;
    vector<char> ins(count);
    for (int i=0; i<count; i++) cin >> ins[i];
    
    int Temp_count = 0;
    int Valley_count = 0;
    bool Ignore = false;
    for (int i=0; i<count-1; i++)
    {
        if (ins[i] == 'U') Temp_count++;
        else Temp_count--;
        
        if (Temp_count >= 0 && Ignore) Ignore = false;
        if (Temp_count < 0 && ins[i] == 'D' && ins[i+1] == 'U' && !Ignore)
        {
            Valley_count++;
            Ignore = true;
        }
    }
    
    cout << Valley_count << endl;
    return 0;
}