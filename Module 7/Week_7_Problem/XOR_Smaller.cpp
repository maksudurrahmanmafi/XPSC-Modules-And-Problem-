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
        int n;
        cin >> n;
        vector<int> a(n);
        int x = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x &= a[i];
        }
        int hoite_pare = 1;
        int ans = 0;
        while (x)
        {
            if (x & 1)
            {
                ans += hoite_pare;
            }
            hoite_pare *= 2;
            x /= 2;
        }
        cout << ans << '\n';
    }
    return 0;
}
