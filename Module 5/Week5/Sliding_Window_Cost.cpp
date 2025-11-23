#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    pbds<pair<long long, int>> pb;
    long long sum = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        pb.insert({v[r], r});
        sum += v[r];

        if (r - l + 1 == k)
        {

            int pos = (k - 1) / 2;
            long long it = pb.find_by_order(pos)->first;

            long long cost = 0;
            for (auto p : pb)
                cost += abs(p.first - it);

            cout << cost << " ";

            pb.erase({v[l], l});
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << "\n";
    return 0;
}
