#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (i % 2 != 0)
            cout << s << '\n';
    }
    return 0;
}
