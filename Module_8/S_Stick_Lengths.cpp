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
    ll sum = 0;
    sort(v.begin(), v.end());
    ll mid = v[n / 2];
    for (int i = 0; i < n; i++)
    {
        sum+=abs(mid-v[i]);
    }
    cout<<sum<<'\n';
    return 0;
}
