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
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        // for (ll i = 0; i < n; i++)
        // {
        //     cin >> v[i];
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        // }
        // sort(v.begin(),v.end());
        // sort(a.rbegin(),a.rend());
        set<ll> st, st2;
        for (auto x : a)
        {
            cin >> x;
            st.insert(x);
        }
        for (auto x : b)
        {

            cin >> x;
            st2.insert(x);
        }
        // for(ll i =0;i<n;i++){
        //     st.insert(a[i]+v[i]);
        // }
        if ((st.size() >= 2 && st2.size() >= 2) || (st.size() >= 3 || st2.size() >= 3))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
