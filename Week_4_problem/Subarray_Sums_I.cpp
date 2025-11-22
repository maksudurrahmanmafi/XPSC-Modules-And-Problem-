#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long sum = 0, count = 0;
    int l = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];

        while (sum > x && l <= i) {
            sum -= a[l];
            l++;
        }

        if (sum == x) count++;
    }

    cout << count << "\n";
    return 0;
}
