// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//      int n,k;
//      cin>>n>>k;
//      cout<<n%k<<'\n';
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        if (K > N)
            cout << N << '\n';
        else
            cout << N % K << '\n';
    }
    return 0;
}
