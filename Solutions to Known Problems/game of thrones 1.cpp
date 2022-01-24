//https://www.hackerrank.com/challenges/game-of-thrones

#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s)
{
    int n = s.length();
    vector<char> chars(n);
    for (int i=0; i<n; i++)
        chars[i] = s[i];
    
    sort(chars.begin(), chars.end());
    
    int ExtraChance = 0;
    int MaxChances = (n % 2 == 0) ? 0 : 1;
    
    for (int i=0; i<n-1; i++)
    {
        if (chars[i] != chars[i + 1])
            ExtraChance++;
        else
            i++;
        
        if (ExtraChance > MaxChances) return "NO";
    }
    return "YES";
}

int main()
{
    string s;
    cin >> s;
    string result = gameOfThrones(s);
    cout << result << endl;
    return 0;
}
