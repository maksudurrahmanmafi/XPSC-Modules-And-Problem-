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
    sort(v.begin(),v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int left = lower_bound(v.begin(), v.end(), l) - v.begin();
        int right = upper_bound(v.begin(), v.end(), r) - v.begin();
        cout << right - left << " ";
    }
    return 0;
}
