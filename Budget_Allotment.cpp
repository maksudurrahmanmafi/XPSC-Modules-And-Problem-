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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int cnt =0;
        for(int i =0;i<n;i++){
            if(v[i]+v[i+1]>=x)cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
