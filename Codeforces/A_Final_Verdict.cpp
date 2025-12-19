#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            sum += val;
        }

        if (sum == n * x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
