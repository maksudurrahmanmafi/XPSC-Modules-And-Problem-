#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,ans =0;
     cin>>n;
     for (int i = 1; i <= n; i++)
     {
        int x;
        cin>>x;
        ans^=(x+x);
     }
     cout<<ans<<'\n';
     
    }
    return 0;
}
