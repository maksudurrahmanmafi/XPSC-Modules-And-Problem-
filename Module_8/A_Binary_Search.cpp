#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (q--)
    {
        int key;
        cin >> key;
        int  l = 0, r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (key == v[mid])
            {
                flag = true;
                break;
            }
            else if (key > v[mid])
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
