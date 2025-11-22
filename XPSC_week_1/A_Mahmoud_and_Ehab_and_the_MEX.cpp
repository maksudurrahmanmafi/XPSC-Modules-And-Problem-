#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    int ops = 0;
    for (int i = 0; i < x; i++)
    {
        if (s.find(i) == s.end())
            ops++;
    }
    if (s.find(x) != s.end())
        ops++;

    cout << ops << endl;

    return 0;
}
