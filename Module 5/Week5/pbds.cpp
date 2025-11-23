#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Ordered set definition
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ordered_set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(10);

    cout << "Elements in order: ";
    for (auto x : s) cout << x << " ";
    cout << "\n";

    cout << "Number of elements < 5: " << s.order_of_key(5) << "\n";
    cout << "0-th element: " << *s.find_by_order(0) << "\n";

    return 0;
}
