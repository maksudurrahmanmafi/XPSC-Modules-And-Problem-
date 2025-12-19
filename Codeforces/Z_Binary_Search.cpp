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
    sort(v.begin(), v.end());
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1, flag = 0, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] == x){

                flag = 1;
                break;
            }
            else if (v[mid] > x)
                r = mid - 1;
            else
                l = mid + 1;
        }
        cout << (flag == 1 ? "found\n" : "not found\n");
    }
    return 0;
}
