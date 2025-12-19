#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first>>v[i].second;
        swap(v[i].first,v[i].second);
    }
    sort(v.begin(),v.end());
    int ans = 0,last=-1;
    for(auto [x,y]:v){
        if(y>=last){
            ans++;
            last=x;

        }

    }
    cout<<ans<<'\n';
    return 0;
}
