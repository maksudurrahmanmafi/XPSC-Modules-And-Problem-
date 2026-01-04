// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//      int n;
//      cin>>n;
//      string s;
//      cin>>s;
//      int cnt =1;
//      for(int i =0;i<n-1;i++){
//         if(s[i]=='0'&&s[i+1]=='1')cnt++;

//      }
//      cout<<cnt<<'\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0;

        for(int i = 1; i <= n; i++){
            if(i == 1){
                if(s[0] != '0') cnt++;
            }
            else if(i == n){
                if(s[n-2] != '1') cnt++;
            }
            else{
                if(s[i-2] != '1' && s[i-1] != '0') cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
