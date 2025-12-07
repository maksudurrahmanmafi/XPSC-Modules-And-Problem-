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
        ll n;
        cin >> n;
        ll x = 1;
        while (x * 2 <= n)
            x *= 2;
        cout << max(x / 2, n - x + 1) << "\n";
    }
    return 0;
}
