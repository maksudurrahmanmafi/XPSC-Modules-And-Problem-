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
//         int n, q;
//         cin >> n >> q;
//         vector<int> v(n), pre(n + 1);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//          sort(v.begin(), v.end());
//         // pre[0]=v[0];
//         // mx[0]=v[0];
//         for (int i = 0; i < n; i++)
//         {
//             // mx[i] = max(mx[i - 1], v[i]);

//             pre[i+1] = pre[i ] + v[i ];
//         }
//         while (q--)
//         {
//             int x, l = 0,r=n-1;
//             cin >> x;
//             while(l<=r){
//                 int mid = (l+r)/2;
//                 if(v[mid]>x) r = mid -1;
//                 else l = mid+1;
//             }
//             // cnt = upper_bound(pre.begin(), pre.end(), x) - pre.begin();
//             // cout << (cnt < 0 ? 0 : pre[cnt-1]) << " ";
//             cout<<pre[l]<<' ';
//         }
//         cout << '\n';
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, q;
//         cin >> n >> q;
//         vector<ll> a(n), pre(n);
//         for (int i = 0; i < n; i++) cin >> a[i];

//         sort(a.begin(), a.end());

//         pre[0] = a[0];
//         for (int i = 1; i < n; i++) pre[i] = pre[i-1] + a[i];

//         while (q--) {
//             ll k;
//             cin >> k;
//             int cnt = upper_bound(a.begin(), a.end(), k) - a.begin();
//             if (cnt == 0) cout << 0 << " ";
//             else cout << pre[cnt-1] << " ";
//         }
//         cout << '\n';
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<ll> v(n), pre(n+1, 0);

        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(), v.end());

        for(int i=0;i<n;i++) pre[i+1] = pre[i] + v[i];

        while(q--){
            ll x;
            cin >> x;
            int l = 0, r = n-1;
            while(l <= r){
                int mid = (l+r)/2;
                if(v[mid] > x) r = mid-1;
                else l = mid+1;
            }
            cout << pre[l] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
