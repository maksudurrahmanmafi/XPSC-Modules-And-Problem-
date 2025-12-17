#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 1;
    for (auto x : v)
    {
        if (x > ans)
            break;
        ans += x;
    }
    cout << ans << '\n';
    return 0;
}
