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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        if (n % 2 != 0)
            cout << "No\n";
        else
        {
            int one = count(s.begin(), s.end(), '1');
            int zero = count(s.begin(), s.end(), '0');
            int remain = n - m;
            if (one > zero && (zero + remain) == one)
                cout << "Yes\n";
            else if (one < zero && (one + remain) == zero)
                cout << "Yes\n";
            else if (one == zero && remain % 2 == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
