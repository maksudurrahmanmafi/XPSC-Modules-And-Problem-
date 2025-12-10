#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void isPrime(long long int n)
{
    if (n < 2)
    {
        cout << "NO\n";
        return;
    }
    if (n == 2)
    {
        cout << "YES\n";
        return;
    }
        if (n % 2 == 0) {   // even number except 2
        cout << "NO\n";
        return;
    }
    for (int i = 3; i * i <= n; i+=2)
    {
        if (n % i == 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    isPrime(n);
    return 0;
}
