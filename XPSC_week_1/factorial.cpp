#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){

        int n;
        cin >> n;
        if (n >= 5)
            cout << 0 << '\n';
        else
        {
            int fact = 1;
            for (int i = 1; i <= n; i++)
                fact *= i;
            cout << fact % 10 << '\n';
        }
    }
    return 0;
}
