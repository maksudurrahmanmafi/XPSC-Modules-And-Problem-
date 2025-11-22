#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<long long, long long> mp;
    mp[0] = 1; // prefix sum = 0 before starting

    long long prefix = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        prefix += a[i];
        if (mp.find(prefix - x) != mp.end())
        {
            cnt += mp[prefix - x];
        }
        mp[prefix]++;
    }

    cout << cnt << "\n";
    return 0;
}
