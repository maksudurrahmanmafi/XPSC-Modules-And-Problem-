#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long int  sum =0;
    
    for (long long int  i = 0; i < n - 1; i++)
    {
        long long int  x;
        cin>>x;
        sum+=x;
    }
 
   long long int  total = (long long int )n*(n+1)/2;
   cout<<total-sum<<'\n';
    return 0;
}
