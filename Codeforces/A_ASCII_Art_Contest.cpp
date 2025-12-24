#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int mx=max({a,b,c});
    int mn=min({a,b,c});
    int sum =a+b+c;
    if(mx-mn<10) cout<<"final " <<sum -mx-mn;
    else cout<<"check again";
    return 0;
}
