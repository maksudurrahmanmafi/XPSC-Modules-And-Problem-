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
        sort(v.begin(),v.end());
        int ans =0;
        int i =0,j=n-1;
        while(i<j){
            ans=max(ans,v[i]%v[j]);
            i++;
        }
        cout<<ans<<"\n";

    }
    return 0;
}
