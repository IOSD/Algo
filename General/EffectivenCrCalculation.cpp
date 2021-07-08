#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
static const ll M = 1e9 + 7;

ll mod_pow(ll b, ll e)
{
    ll res = 1;
    while(e)
    {
        if (e & 1) res = (res * b) % M;
        b = (b * b) % M;
        e >>= 1;
    }
    return res;
}

ll nCr(ll n, ll r)
{
    if (n < r) return 0;

    ll res = 1;
    ll rem = 1;
    for (ll i = n - r + 1; i <= n; i++) res = (res * i) % M;
    for (ll i = 2; i <= r; i++) rem = (rem * i) % M;

    return (res * mod_pow(rem, M - 2)) % M;
}
