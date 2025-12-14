#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    int ans = 1;

    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        cout<<"CASE# "<<ans++<<":\n";
        while(q--){
            int x;
            cin>>x;
            auto it = lower_bound(v.begin(),v.end(),x);
            if(it!=v.end() && *it == x){
                int pos = (it-v.begin())+1;
                cout<<x <<" found at "<<pos<<'\n';

            }
            else cout<<x<<" not found\n";
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int binaryToDecimal(string binary)
// {
//     int decimal = 0;
//     int length = binary.length();

//     for (int i = 0; i < length; i++)
//     {
//         if (binary[i] == '1')
//         {
//             decimal += pow(2, length - 1 - i);
//         }
//     }

//     return decimal;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int count = 0;
//         int temp = n;
//         while (temp > 0)
//         {
//             if (temp % 2 == 1)
//                 count++;
//             temp /= 2;
//         }
//         string binary(count,'1');
//         int result = binaryToDecimal(binary);
//         cout << result << endl;
        
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int K, S;
//     cin >> K >> S;
 
//     long long ans = 0;
//     for (int x = 0; x <= K; x++)
//     {
//         for (int y = 0; y <= K; y++)
//         {
//             int z = S - x - y;
//             if (0 <= z && z <= K)
//                 ans++;
//         }
//     }
 
//     cout << ans << "\n";
//     return 0;
// }