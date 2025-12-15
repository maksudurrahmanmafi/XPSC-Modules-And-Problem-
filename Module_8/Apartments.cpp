#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(v.begin(), v.end());
    sort(b.begin(), b.end());
    int l = 0, r = 0, ans = 0;
    while (l < n && r < m)
    {
        if (b[r] < v[l] - k)
            r++;
        else if (b[r] > v[l] + k)
            l++;
        else
        {
            ans++;
            l++, r++;
        }
    }
    cout << ans << '\n';

    return 0;
}
