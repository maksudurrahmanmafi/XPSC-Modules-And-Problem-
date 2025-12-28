#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        deque<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        for (ll i = 1; i <= k; i++)
        {
            if (v.size() < 2)
                break;
            ll x = v.front();
            v.pop_front();
            ll y = v.back();
            v.pop_back();
            v.push_back(x + y);
        }
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << '\n';
    }
}
