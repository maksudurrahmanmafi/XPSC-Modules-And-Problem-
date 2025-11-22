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
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1, 0), b(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        int l = 1, r = 1, ans = 0;
        while (r <= n)
        {
            if (b[r - 1] % b[r])
                l = r;
            while (a[r] - a[l - 1] > k && l <= r)
                l++;
            ans = max(ans, r - l + 1);
            r++;
        }
        cout << ans << '\n';
    }
    return 0;
}
