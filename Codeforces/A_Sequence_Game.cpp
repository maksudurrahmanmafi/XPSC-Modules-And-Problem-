#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // for(auto x:v)cout<<x<<" ";
        // cout<<endl;
        // cout<<v[n-1]<<'\n';
        int x;
        cin>>x;
        sort(v.begin(),v.end());

        if(x>=v[0]&&x<=v[n-1])cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
