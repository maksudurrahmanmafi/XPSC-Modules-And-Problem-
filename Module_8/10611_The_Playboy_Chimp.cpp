#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin>>q;
    while(q--){
        ll h;
        cin>>h;
        auto it = lower_bound(v.begin(),v.end(),h);
        if(it==v.begin())cout<<"X";
        else cout<< *(it-1);
        cout << " ";
        auto it2 = upper_bound(v.begin(),v.end(),h);
        if(it2==v.end())cout<<"X";
        else cout<<*it2;


        cout<<"\n";

    }
    return 0;
}
