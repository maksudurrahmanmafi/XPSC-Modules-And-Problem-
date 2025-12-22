#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    int total =n*(n+1)/2;
    if(total%2!=0){
        cout<<"NO"<<'\n';
        return 0;
    }
    cout<<"YES\n";
    vector<int>a,b;
    int target = total/2;
    for(int i =n;i>=1;i--){
        if(i<=target){
            a.push_back(i);
            target-=i;
        }
        else b.push_back(i);
    }
    cout<<a.size()<<'\n';
    for(auto x:a)cout<<x<<" ";
    cout<<'\n';
    cout<<b.size()<<"\n";
    for(auto x:b)cout<<x<<" ";
    return 0;
}
