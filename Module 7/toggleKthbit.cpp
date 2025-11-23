#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int togglekthbit(int n,int k){
    return n^(1<<k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;cin>>n>>k;
    cout<<togglekthbit(n,k);
    return 0;
}
