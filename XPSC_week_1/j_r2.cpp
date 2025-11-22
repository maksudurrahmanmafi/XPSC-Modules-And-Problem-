#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r, s;
    cin >> r >> s;
    // cout << (2 * s) - r;
    if (s > r)
        cout << (s / 2) + r + 1;
    // else if (s == r)
    //     cout << (s / 2) + r;
    else
        cout << (s / 2) + 1;
    return 0;
}
