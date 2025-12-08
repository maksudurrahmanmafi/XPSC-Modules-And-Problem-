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
        int n,Xor =0;;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            Xor^=v[i];

        }
        int ans =Xor,P;
        for(int i =0;i<n;i++){
            P=Xor^v[i];
            ans = min(ans,P);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
