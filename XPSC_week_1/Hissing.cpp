#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i] == 's' && s[i + 1] == 's'){

            cout << "hiss\n";
            return 0;
        }
    }
    cout << "no hiss\n";

    return 0;
}
