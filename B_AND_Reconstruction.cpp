#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i = 1; i < n; i++)
            cin >> b[i];

        vector<long long> a(n + 1);

        a[1] = b[1];
        for (int i = 2; i < n; i++)
        {
            a[i] = b[i - 1] | b[i];
        }
        a[n] = b[n - 1];
        bool flag = false;
        for (int i = 1; i <= n - 1; i++)
        {
            if ((a[i] & a[i + 1]) != b[i])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << -1 << '\n';
            continue;
        }

        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
        
//         vector<long long> b(n);
//         for (int i = 1; i < n; i++) cin >> b[i];

//         vector<long long> a(n+1);

//         // Construct a
//         a[1] = b[1];
//         for (int i = 2; i < n; i++)
//             a[i] = b[i-1] | b[i];
//         a[n] = b[n-1];

//         // Always valid, but we keep check for safety
//         bool bad = false;
//         for (int i = 1; i < n; i++) {
//             if ( (a[i] & a[i+1]) != b[i] ) {
//                 bad = true;
//                 break;
//             }
//         }

//         if (bad) {
//             cout << -1 << "\n";
//         } else {
//             for (int i = 1; i <= n; i++)
//                 cout << a[i] << " ";
//             cout << "\n";
//         }
//     }
//     return 0;
// }
