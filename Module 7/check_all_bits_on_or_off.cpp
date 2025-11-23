#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool checekd_kth_bit(int n,int k){
    return ((n>>k)&1);

}
void checked_all_bit(int n){
    for(int k =0;k<=7;k++){
        if(checekd_kth_bit(n,k)){
            cout<<1 <<" YES\n";
        }else cout<<0<<" NO\n";

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    checked_all_bit(n);
    return 0;
}
