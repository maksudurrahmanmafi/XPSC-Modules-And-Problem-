#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int ans = log2(n);
    if(pow(2,ans)==n)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
