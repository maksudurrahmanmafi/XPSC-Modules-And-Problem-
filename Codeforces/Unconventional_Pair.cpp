#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n), a;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i += 2)
        {
            ll sum = abs(v[i] - v[i + 1]);
            a.push_back(sum);
        }
        cout << *max_element(a.begin(), a.end()) << '\n';
    }
    return 0;
}
