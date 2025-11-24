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
     string a,b;
     cin>>a>>b;
     if(a==b || a[0]=='1'){
        cout<<"YES\n";
        continue;
     }

    //  int pos =-1;
    //  for(int i =0;i<n;i++){
    //     if(a[i]=='1'){
    //         pos =i;
    //         break;
    //     }
    //  }
    auto pos = a.find('1');
     if(pos!=-1){
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
             if(a[i]!=b[i]){
                if(pos>i){
                    flag = false;
                    break;
                }
             }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
        
     }
     else cout<<"NO\n";

    }
    return 0;
}
