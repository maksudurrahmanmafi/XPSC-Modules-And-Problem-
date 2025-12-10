#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    while(q--){
        int key;
        cin>>key;
        int l=1,r=n,ans=0;
        while(l<=r){
            int mid =(l+r)/2;
            if(key>=v[mid]){
                ans = mid;
                l =mid+1;
            }
            else{
                r =mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
