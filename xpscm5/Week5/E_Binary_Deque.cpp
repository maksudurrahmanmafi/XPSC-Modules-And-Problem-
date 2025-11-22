#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int l = 0, r = 0;
        long long sum = 0;int ans = 0;
        while (r < n)
        {
            sum += v[r];
            if (sum == k)
                ans = max(ans, r - l + 1);
            else
            {
                while (sum > k && l <= r)
                {

                    sum -= v[l];
                    l++;
                }
                if (sum == k)
                    ans = max(ans, r - l + 1);
            }
            r++;
        }

        if (ans == 0)
            cout << -1 << '\n';
        else
            cout << n - ans << '\n';
    }
    return 0;
}
