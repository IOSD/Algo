#include <iostream>
#include <vector>



using namespace std;


int main()
{
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++)
    {
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int h_letter,h_max=0;
    for(unsigned int i=0;i<word.size();i++)
    {
        h_letter=h[word[i]-'a'];
        if(i==0)
        {
            h_max=h_letter;
        }
        else if(h_letter>h_max)
        {
            h_max=h_letter;
        }

    }
    cout<<h_max*word.size();
    return 0;
}
