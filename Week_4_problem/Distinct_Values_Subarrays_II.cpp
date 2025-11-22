#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    int cnt = 0;
    long long ans = 0;
    int a[n + 1];
    for (int i = 1, j = 1; j <= n; j++)
    {
        cin >> a[j];
        mp[a[j]]++;
        if (mp[a[j]] == 1)
            cnt++;
        while (cnt > k)
        {
            mp[a[i]]--;
            if (mp[a[i]] == 0)
                cnt--;
            i++;
        }
        ans += (j - i + 1);
    }
    cout << ans << '\n';
    return 0;
}
