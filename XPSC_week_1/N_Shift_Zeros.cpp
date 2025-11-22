#include <bits/stdc++.h>
using namespace std;
void shift_zero()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int count_zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] != 0)
            cout << v[i] << " ";
        else
            count_zero++;
    }
    for(int i =0;i<count_zero;i++){
        cout<<0<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    shift_zero();
    return 0;
}
