#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string new_string="";
    new_string+=s[0];
    for(int i =0;i<s.size();i++){
        if(s[i]=='-') new_string+=s[i+1];
    }
    cout<<new_string<<'\n';

    return 0;
}
