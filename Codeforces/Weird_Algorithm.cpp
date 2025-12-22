#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    while (n != 1)
    {

        cout << n << " ";

        if (n % 2 == 1)
        {
            n = (n*3) + 1;
        }
        else
        {
            n /= 2;
        }
    }
    cout<<1<<'\n';
    return 0;
}
