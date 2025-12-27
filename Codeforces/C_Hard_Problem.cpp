// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int m, n, a, b;
//         ll ans = 0;
//         cin >> m >> n >> a >> b;
//         if (n <= m)
//             ans += n;
//         else
//             ans += m;
//         if (a <= m)
//             ans += a;
//         else
//             ans += m;
//         if (b <= m)
//             ans += b;
//         else
//             ans += m;
//         cout << ans << '\n';
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll m, a, b, c;
        cin >> m >> a >> b >> c;

        ll row1 = min(a, m);
        ll row2 = min(b, m);

        ll freeSeats = (m - row1) + (m - row2);

        ll ans = row1 + row2 + min(c, freeSeats);
        cout << ans << '\n';
    }
    return 0;
}
