#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     
    ll a, b;
    cin >> a >> b;
    ll x = 1;
    ll mx = 0;
    for (int i = 0; i < 32; i++, x *= 2)
    {
        if (a & x)
        {
            mx = x;
        }
    }
    if (b < mx)
    {
        cout << 3 << '\n' << a - mx << " " << b << " " << mx << '\n';
    }
    else if (b < 2 * mx)
    {
        cout << 2 << '\n' << a - mx << " " << b - mx << '\n';
    }
    else
        cout << -1 << '\n';
    }
    return 0;
}
