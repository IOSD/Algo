//https://www.hackerrank.com/challenges/sherlock-and-valid-string

#include <bits/stdc++.h>

using namespace std;

string isValid(string s)
{
    int n = s.length();
    vector<char> chars(n);
    for (int i=0; i<n; i++)
        chars[i] = s[i];
    
    sort(chars.begin(), chars.end());
    
    int Freq = 0;
    char LastChar = chars[0];
    vector <int> Frequencies(0);
    
    for (int i=0; i<n; i++)
    {
        if (LastChar == chars[i])
            Freq++;
        else
        {
            Frequencies.push_back (Freq);
            LastChar = chars[i];
            Freq = 1;
        }
    }
    Frequencies.push_back (Freq);
    int Occurence = 0;
    for (int i=0; i<Frequencies.size(); i++)
    {
        if (Frequencies[i] == 1)
            Occurence++;
    }
        
    Frequencies.erase(unique(Frequencies.begin(), Frequencies.end()), Frequencies.end());
    
    if (Frequencies.size() == 1) return "YES";
    else if (Frequencies.size() == 2) return (Frequencies[1] - Frequencies[0] == 1 || Occurence == 1) ? "YES" : "NO";
    else return "NO";
}

int main()
{
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    return 0;
}
