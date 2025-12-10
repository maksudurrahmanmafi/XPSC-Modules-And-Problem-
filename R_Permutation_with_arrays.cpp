#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool flag = true;
    for (int i = 0; i < n; i++)
    
    {
        if(a[i]!=b[i]){
            flag = false;
            break;
        }
       
    }
    cout<<(flag?"yes\n":"no\n");
    return 0;
}
