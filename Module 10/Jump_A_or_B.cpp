#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
       

        int n, m, a, b;
        cin >> n >> m >> a >> b;

        int ex = m - (n * a);
        int diff = b - a;

        if (n * a > m or n * b < m)
        {
            cout << "NO" << endl;
        }
        else if (ex % diff == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
