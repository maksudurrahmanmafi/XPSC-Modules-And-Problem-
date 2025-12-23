#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     double s,v;
     cin>>s>>v;
     double ans = (2*s)/(3*v);
     cout<<fixed<<setprecision(6)<<ans<<"\n";

    }
    return 0;
}
