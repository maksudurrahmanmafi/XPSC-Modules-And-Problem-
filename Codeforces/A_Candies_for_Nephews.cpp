#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ((n + 2) % 3 == 0)
            cout << 2 << '\n';
        else if ((n + 1) % 3 == 0)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}
