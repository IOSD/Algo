/ https://www.hackerrank.com/challenges/birthday-cake-candles/submissions/code/52926155

#include <bits/stdc++.h>

using namespace std;


int main() {
    int n,max=0,count=0;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    for(int ar_i = 0; ar_i < n; ar_i++){
       if(ar[ar_i]>max)
       {
           max=ar[ar_i];
       }
    }
    for(int ar_i = 0; ar_i < n; ar_i++){
       if(ar[ar_i]==max)
       {
           count++;
       }
    }
    cout<<count;
    
    return 0;
}
