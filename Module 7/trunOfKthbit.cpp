#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int turnofkthbit(int n,int k){
    return n&(~(1<<k));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    cout<<turnofkthbit(n,k);
    return 0;
}
