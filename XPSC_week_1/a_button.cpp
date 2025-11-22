#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    if(x>y) cout<<x +(x-1);
    else if(x<y) cout<<y+(y-1);
    else cout<<x+y;
    return 0;
}
