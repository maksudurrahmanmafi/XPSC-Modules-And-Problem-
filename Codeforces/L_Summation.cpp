#include <bits/stdc++.h>
using namespace std;

long long recursiveSum(int i, int n, vector<long long> &a) {
    // base case
    if (i == n)
        return 0;

    // recursive case
    return a[i] + recursiveSum(i + 1, n, a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans = recursiveSum(0, n, a);
    cout << ans << "\n";

    return 0;
}
