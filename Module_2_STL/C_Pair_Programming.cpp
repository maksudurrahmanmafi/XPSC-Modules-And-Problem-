#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for(int &x: a) cin >> x;
        for(int &x: b) cin >> x;

        int i = 0, j = 0;
        int lines = k;
        vector<int> ans;
        bool possible = true;

        while(i < n || j < m){
            bool moved = false;
            if(i < n && (a[i] == 0 || a[i] <= lines)){
                ans.push_back(a[i]);
                if(a[i] == 0) lines++;
                i++;
                moved = true;
            } else if(j < m && (b[j] == 0 || b[j] <= lines)){
                ans.push_back(b[j]);
                if(b[j] == 0) lines++;
                j++;
                moved = true;
            }

            if(!moved){
                possible = false;
                break;
            }
        }

        if(possible){
            for(int x: ans) cout << x << " ";
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
