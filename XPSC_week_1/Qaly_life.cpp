#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
   double total =0;
    for(int i =0;i<n;i++){
        double a,b;
        cin>>a>>b;
        total+=a*b;

    }
    cout<<fixed<<setprecision(3)<<total<<'\n';
    return 0;
}
