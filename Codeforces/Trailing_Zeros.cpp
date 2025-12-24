#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long zeros = 0;
    for (long long i = 5; i <= n; i *= 5) {
        zeros += n / i;
    }

    cout << zeros << '\n';
    return 0;
}
