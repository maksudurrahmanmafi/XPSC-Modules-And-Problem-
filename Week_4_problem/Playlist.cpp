

#include <bits/stdc++.h>
// #include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    set<long long> seen;
    int l = 0, ans = 0;

    for (int r = 0; r < n; r++) {
        while (seen.count(v[r])) {
            seen.erase(v[l]);
            l++;
        }
        seen.insert(v[r]);
        ans = max(ans, r - l + 1);
    }

    cout << ans << "\n";
    return 0;
}
