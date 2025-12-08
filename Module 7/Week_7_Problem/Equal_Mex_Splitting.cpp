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
     vector<int>v(n);
     int cnt =0,cnt2=0;
     for(int i =1;i<=n;i++){
        int x;
        cin>>x;
        if(x==0)cnt ++;
        else cnt2++;
     }
     cout<<max(cnt,cnt2)<<'\n';
    }
    return 0;
}
