#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        // for (ll &x : v)
        //     cin >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = v[0];
        for (int i = 1; i < n; i++)
        {
            ans ^= v[i];
        }
        ll x = -1;

        if (n % 2 != 0)
        {
            x = ans;
        }
        else
        {
            if (ans == 0)
            {
                x = ans;
            }
        }
        cout << x << '\n';
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int x=-1;
//         vector<int>arr(n);
//         for(int &x:arr)cin>>x;
//        int ex =arr[0];
//        for(int i=1;i<n;i++)
//        {
//         ex=ex^arr[i];
//        }
//         if(n%2!=0)
//         {
//             x=ex;
//         }
//         else
//         {
//             if(ex==0)
//             x=ex;
//         }
//         cout<<x<<endl;
//        }
// }
