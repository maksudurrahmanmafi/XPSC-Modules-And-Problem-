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
        vector<int> freq(101,0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >>x;
            freq[x]++;
        }
        int ans =0;
        // while(1){
        //     if(freq[ans]==0) break;
        //     if(ans>0 && freq[ans]>freq[ans-1])break;
        //     ans++;
        // }
                while (freq[ans] > 0) ans++;

        cout<<ans<<'\n';
    }
    return 0;
}
