#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
     
        int n;
        cin >> n;
    
        map<ll, ll> mp;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            mp[x]++;  
        }
    
        
        vector<ll> freq;
        for (auto &p : mp) {
            freq.push_back(p.second);
        }
    
 
        sort(freq.begin(), freq.end());
    
        ll ans = 0;
        int m = freq.size();
    
        
        for (int i = 0; i < m; i++) {
            ll x = freq[i];
            ll cnt = m - i;
            ans = max(ans, x * cnt);
        }
    
        cout << ans << "\n";
    }

    return 0;
}
