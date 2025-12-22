#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     string s;
     cin>>s;
     int cnt = count(s.begin(),s.end(),'1');
     cout<<cnt <<'\n';
    }
    return 0;
}
