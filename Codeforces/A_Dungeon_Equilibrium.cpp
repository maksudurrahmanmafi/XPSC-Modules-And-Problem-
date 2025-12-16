#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_map<int,int> freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int ans = 0;
        for (auto [x, cnt] : freq) {
            if (cnt < x) {
                ans += cnt;          // delete all
            } else {
                ans += cnt - x;      // delete extra
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
