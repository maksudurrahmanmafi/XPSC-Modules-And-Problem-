#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    set<ll>st;
    while(n--){
        int x;
        cin>>x;
        st.insert(x);
    }
    cout<<st.size();
    return 0;
}
