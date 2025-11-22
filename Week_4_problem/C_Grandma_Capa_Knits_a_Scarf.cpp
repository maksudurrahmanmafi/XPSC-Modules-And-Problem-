#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mn = INT_MAX;
        for (char i = 'a'; i <= 'z'; i++)
        {
            bool ok = true;
            int cnt = 0;
            int l = 0, r = n - 1;
            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l] == i)
                {
                    l++;
                    cnt++;
                }
                else if (s[r] == i)
                {
                    r--;
                    cnt++;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                mn = min(mn, cnt);
            }
        }
        if (mn == INT_MAX)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << mn << "\n";
        }
    }
}