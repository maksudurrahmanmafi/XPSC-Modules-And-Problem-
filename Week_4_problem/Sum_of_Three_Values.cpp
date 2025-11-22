#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int> > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        long long target = x - a[i].first;
        int l = i + 1, r = n - 1;

        while (l < r) {
            long long sum = a[l].first + a[r].first;

            if (sum == target) {
                cout <<a[l].second  << " " << a[r].second << " " << a[i].second << "\n";
                return 0;
            }
            else if (sum < target) l++;
            else r--;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
