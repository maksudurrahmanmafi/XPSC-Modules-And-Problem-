#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1), pref(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        ll totalSum = pref[n];

        while (q--) {
            int l, r;
            ll k;
            cin >> l >> r >> k;

            ll rangeSum = pref[r] - pref[l - 1];
            ll newSum = totalSum - rangeSum + (r - l + 1) * k;

            if (newSum % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}
