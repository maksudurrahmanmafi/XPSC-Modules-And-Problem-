#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int l =0,r=n-1,ans =0;
    while(l<=r){
        if(v[l]+v[r]<=k){
            l++;
            r--;
        }
        else r--;
        ans++;

    }
    cout<<ans<<'\n';
    return 0;
}
