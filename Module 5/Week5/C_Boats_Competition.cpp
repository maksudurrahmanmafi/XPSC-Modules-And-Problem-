
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
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 1; i <= 100; i++)
        {
            int l = 0, r = n - 1,curr = 0;
            while(l<r){
                int ans =v[l]+v[r];
                if(ans==i){
                    curr++,l++,r--;
                }
                else if(ans>i) r--;
                else l++;
            }
            ans =max(ans,curr);

        }
        cout<<ans<<'\n';
    }
    return 0;
}
