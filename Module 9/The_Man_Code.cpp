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
//      int even =0,odd =0;
//      for(int  i =1;i<=n;i++){
//         if(i%2!=0)odd++;
//         else even++;
//      }
//      cout<<odd<<" "<<even<<'\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     double n;
     cin>>n;
     int mx =ceil(n/2);
     int mn = ceil(n/3);

     cout<<mx<<' '<<mn<<'\n';
    }
    return 0;
}

