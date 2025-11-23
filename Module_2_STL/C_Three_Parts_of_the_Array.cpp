#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<long long>v(n+1);
    for(int i =1;i<=n;i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }
    long long mx=0,i=1,j=n;
    while(i<j){
        long long l =v[i],r=v[n] -v[j-1];
        if(r==l){
            mx=max(mx,l);
            i++,j--;
        }
        else if(l<r) i++;
        else j--;

    }
    cout<<mx;
    return 0;
}
