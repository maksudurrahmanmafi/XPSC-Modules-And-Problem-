#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        long long q;
        cin >> n >> k >> q;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long cnt = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] <= q) {
                cnt++;
            } else {
                if(cnt >= k) ans +=1ll* (cnt - k + 2)*(cnt - k + 1)/2;
                cnt = 0;
            }
        }
        if(cnt >= k) ans += 1ll* (cnt - k + 1)*(cnt - k + 2)/2;
        cout << ans << "\n";
    }

    return 0;
}
