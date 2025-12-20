// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         string s;
//         cin >> n >> s;
//         //  sort(s.begin(),s.end());
//         auto it =find(s.begin(),s.end(),'z');
//         if(it!=s.end())
//             cout << -1 << '\n';

//         else
//         {
//
//         }

//     }
//     return 0;
// }

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
        string s;
        cin >> n >> s;
        bool all = true;
        for (auto c : s)
        {
            if (c != 'z')
            {
                all = false;
                break;
            }
        }

        if (all)
            cout << -1 << '\n';
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                cout << 'z';
            }
            cout << '\n';
        }
    }
    return 0;
}
