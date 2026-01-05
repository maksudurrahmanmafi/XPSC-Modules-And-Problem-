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
        string s;
        cin >> n >> s;
        int cnt = count(s.begin(), s.end(), '0');
        int cnt1 = count(s.begin(), s.end(), '1');
        int need = min(cnt, cnt1), ans = 0;
        for (int i = 1; i <= n; i++)
        {
            bool ok = false;
            if (i >= cnt1 && (i - cnt1) % 2 == 0)
                ok = true;
            if (i >= cnt && (i - cnt) % 2 == 0)
                ok = true;

            if (ok)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         string S;
//         cin >> N >> S;

//         int cnt0 = 0, cnt1 = 0;
//         for (char c : S) {
//             if (c == '0') cnt0++;
//             else cnt1++;
//         }

//         int ans = 0;
//         for (int k = 1; k <= N; k++) {
//             bool ok = false;

//             // target: all 0
//             if (k >= cnt1 && (k - cnt1) % 2 == 0)
//                 ok = true;

//             // target: all 1
//             if (k >= cnt0 && (k - cnt0) % 2 == 0)
//                 ok = true;

//             if (ok) ans++;
//         }

//         cout << ans << '\n';
//     }
//     return 0;
// }
