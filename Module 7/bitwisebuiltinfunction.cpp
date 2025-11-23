#include <bits/stdc++.h>
#include<cmath>
#include<algorithm>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n==0) cout<<-1;

    else cout<<int(log2(n))<<'\n';//__lg(n) highest bit position

    cout<<__builtin_popcountll(n)<<'\n';//__builtin_popcountll(n) count 1 bit in n

    cout<<__builtin_ctzll(n)<<'\n';//LSB thake triling zero count kore
    cout<<__builtin_clz(n)<<'\n';//MSB thake zero count kore 
    cout<<__builtin_ffs(n)<<'\n';//LSB thake 1st 1 ar position
    cout<<__builtin_parity(n);
    return 0;
}
