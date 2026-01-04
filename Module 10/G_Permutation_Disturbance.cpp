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
        int cnt = 0;
        vector<int> v(n);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i <= n; i++)
        {

            if (v[i] == i && v[i+1]==i+1)
            {
                cnt++;
                i++;

            }
            else if(v[i]==i)cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
