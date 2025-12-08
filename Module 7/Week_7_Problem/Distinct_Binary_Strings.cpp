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
     string s;
     cin>>n>>s;
     char c =s[0];
     int cnt =1;
     for(int i =0;i<n;i++){
        if(s[i]!=c)cnt++;
        c =s[i];
     }
     cout<<cnt<<'\n';
    }
    return 0;
}
