#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll r, l;
    cin >> r >> l;

    ll sum = 0, even = 0, odd = 0;
    if (r > l)
        swap(r, l);
    for (int i = r; i <= l; i++)
    {
        sum += i;
        if (i % 2 == 0)
            even += i;
        else
            odd += i;
    }
    cout << sum << endl
         << even << endl
         << odd;
    return 0;
}
