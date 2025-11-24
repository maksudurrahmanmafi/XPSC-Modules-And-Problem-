#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    auto ans = check_kth_bit_on_or_off(n, k);
    if (ans)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
