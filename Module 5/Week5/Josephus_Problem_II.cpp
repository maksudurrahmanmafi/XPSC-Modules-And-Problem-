#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

// Ordered set (supports find_by_order and erase in O(log n))
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    ordered_set<int> s;
    for (int i = 0; i < n; i++) s.insert(i);  // store indices 0..n-1

    long long pos = 0;
    vector<int> v;

    for (int i = n; i > 0; i--) {
        // Skip k children starting from current position
        pos = (pos + k) % i;  

        // Find child at pos-th index and remove
        auto it = s.find_by_order(pos);
        v.push_back(*it + 1); // convert to 1-based numbering
        s.erase(it);
    }

    for (int x : v) cout << x << " ";
    cout << "\n";
}
