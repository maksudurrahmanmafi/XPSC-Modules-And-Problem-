#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    int ans = 1;

    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        cout<<"CASE# "<<ans++<<":\n";
        while(q--){
            int x;
            cin>>x;
            auto it = lower_bound(v.begin(),v.end(),x);
            if(it!=v.end() && *it == x){
                int pos = (it-v.begin())+1;
                cout<<x <<" found at "<<pos<<'\n';

            }
            else cout<<x<<" not found\n";
        }
    }
    return 0;
}
