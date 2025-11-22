#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,prev;
    cin >> n>>prev;
    ll a, move = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        if (a < prev)
            move += (prev - a);
        else
            prev = a;
    }
    cout << move << '\n';

    return 0;
}
