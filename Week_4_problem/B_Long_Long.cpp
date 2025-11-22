#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll sum = 0, ops = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            sum += abs(v[i]);
            if (v[i] < 0)
            {
                flag = true;
            }
            else if (v[i] == 0)
                continue;
            else
            {
                if (flag)
                {
                    ops++;
                    flag = false;
                }
            }
           
        }
         if (flag)
                ops++;
        cout << sum << " " << ops << '\n';
    }
    return 0;
}
