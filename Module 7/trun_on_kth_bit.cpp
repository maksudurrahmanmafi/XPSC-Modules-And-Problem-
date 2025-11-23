#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int turn_on_kth_bit(int n,int k){
    return (n|(1<<k));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    cout<<turn_on_kth_bit(n,k);
    
    return 0;
}
