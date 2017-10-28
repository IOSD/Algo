//https://www.hackerrank.com/challenges/two-strings

#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2)
{
    vector<char> chars1(s1.length());
    vector<char> chars2(s2.length());
    for (int i=0; i<s1.length(); i++) chars1[i] = s1[i];    
    for (int i=0; i<s2.length(); i++) chars2[i] = s2[i];
    sort(chars1.begin(), chars1.end());
    sort(chars2.begin(), chars2.end());
    chars1.erase( unique( chars1.begin(), chars1.end() ), chars1.end() );
    chars2.erase( unique( chars2.begin(), chars2.end() ), chars2.end() );
    
    for (int i=0; i<chars1.size(); i++)
    {
        for (int j=0; j<chars2.size(); j++)
            if (chars1[i] == chars2[j]) return "YES";
    }
    
    return "NO";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}
