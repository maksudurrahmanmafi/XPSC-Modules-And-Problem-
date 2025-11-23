#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll l = 0, r = 0, ans = INT_MAX, sum = 0;

    while (r < n)
    {
        sum += v[r];
        // if (sum >= s)

        while (sum >= s && l <= r)
        {
            ans = min(ans, r - l + 1);

            sum -= v[l];
            l++;
        }
        r++;
    }
    if (ans == INT_MAX)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
    return 0;
}
