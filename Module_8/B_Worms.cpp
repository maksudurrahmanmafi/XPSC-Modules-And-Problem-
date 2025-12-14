#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n), pre(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i =1;i<=n;i++){
        pre[i]=pre[i-1]+v[i-1];
    }
    ll q;
    cin>>q;
    while(q--){

        ll m;
        cin>>m;
        ll pile = lower_bound(pre.begin(),pre.end(),m)-pre.begin();
        cout<<pile<<'\n';
    }
    return 0;
}
