#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1000000007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll ans =1,base =2;
    while(n>0)
    {
        if(n&1)
        ans =(base*ans)%MOD;
        base =(base *base)%MOD;
        n>>=1;
    }
    cout<<ans<<'\n';
    return 0;
}
