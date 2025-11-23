#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; i++) q.push(i);

    vector<int> removal_order;
    while (!q.empty()) {
        // Skip one child (move to back)
        int first = q.front(); q.pop();
        q.push(first);

        // Remove next child
        int second = q.front(); q.pop();
        removal_order.push_back(second);
    }

    for (int x : removal_order) cout << x << " ";
    cout << "\n";
}
