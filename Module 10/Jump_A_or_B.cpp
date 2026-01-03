// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--)
//     {
       

//         int n, m, a, b;
//         cin >> n >> m >> a >> b;

//         int ex = m - (n * a);
//         int diff = b - a;

//         if (n * a > m or n * b < m)
//         {
//             cout << "NO" << endl;
//         }
//         else if (ex % diff == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

//Created On 01/10/2002 by Cho_coLassi

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yn(a) cout << ((a) ? "YES\n" : "NO\n")

void boombam() {
    //Enter your Code!!-->Ezz
    int n, m, a, b;
        cin >> n >> m >> a >> b;

        int ex = m - (n * a);
        int diff = b - a;
        
        if(n * a > m or n * b < m){
          cout << "NO" << endl;
        }
        else if(ex % diff == 0){
          cout << "YES" << endl;
        }
        else{
          cout << "NO" << endl;
        }
}

signed main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        boombam();
    }

    return 0;
}