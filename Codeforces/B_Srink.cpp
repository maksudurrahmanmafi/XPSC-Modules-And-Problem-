#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     for(int i = 2;i<n;i++){
        cout<<i<<" ";
     }
     cout<<n<<" "<<1<<'\n';
    }
    return 0;
}
