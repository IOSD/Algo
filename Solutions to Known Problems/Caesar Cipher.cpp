//https://www.hackerrank.com/challenges/caesar-cipher-1/problem
#include <bits/stdc++.h>

using namespace std;

string caesarCipher(string s, int k) {
k=k%26;
    long int c;
for(int i=0;s[i];i++)
{
    if(s[i]!='`')
    {
    c=s[i];
    if(c<=90 && c>=64)
    {
        c+=k;
        if(c>'Z')
        c-=26;
    }
    else if(c<=122 && c>=96)
    {
        c+=k;
        if(c>'z')
        c-=26;
    }
    s[i]=(char)c;
    }
}
return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
