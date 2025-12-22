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

        int n, b;
        cin >> n >> b;
        int ans = INT_MIN;

        while (n--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            if (z <= b)
            {
                ans = max(ans, x * y);
            }
        }
        if (ans == INT_MIN)
            cout << "no tablet\n";
        else
            cout << ans << '\n';
    }
    return 0;
}
