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
        int n;
        cin >> n;
        vector<int> v(n);
        int count_1 = 0, count_2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                count_1++;
            else
                count_2 ++;
        }
        int move_one = (count_1 / 2) + (count_1 % 2);
        int ans = move_one + count_2;
        cout << ans << '\n';
    }
    return 0;
}
