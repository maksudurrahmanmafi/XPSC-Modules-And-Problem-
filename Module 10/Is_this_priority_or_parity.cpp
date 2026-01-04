// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, x;
//         cin >> n >> x;
//         if (x == 1)
//         {

//             if (n % 2 != 0)
//             {
//                 cout << "ODD\n";
//             }
//             else
//             {
//                 cout << "EVEn\n";
//             }
//         }
//         else
//             cout << "EVEn\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (k == 1)
        {
            if (n % 2 == 1)
                cout << "ODD\n";
            else
                cout << "EVEN\n";
        }
        else if (k == 2)
        {

            cout << "ODD\n";
        }
        else
        {

            cout << "EVEN\n";
        }
    }

    return 0;
}
