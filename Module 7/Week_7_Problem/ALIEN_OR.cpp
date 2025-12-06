#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
     map<string,bool>present;
     for(int i =0;i<n;i++){
        string s;
        cin>>s;
        present[s]=true;
     }
     string s;
     for(int i =0;i<k;i++){
        s.push_back('0');
     }
     bool ok =true;
     for(int i =0;i<k;i++){
        s[i]='1';
        if(!present[s]){
            ok=false;
        }
        s[i]='0';
     }
     cout<<(ok?"YES\n":"NO\n");
    }
    return 0;
}
