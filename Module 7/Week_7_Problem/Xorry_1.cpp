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
     int MSB = log2(n),B=(1<<MSB),A=(n^B);
     cout<<A<<" "<<B<<'\n';
    }
    return 0;
}
