#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<bool>v(26,false);
    for(char c:s){
        v[c-'a']= true;
    }
    for(int i = 0;i<26;i++){
        if(!v[i]){

            cout<<char('a'+i)<<'\n';
            return 0;
        }
    }
    cout<<"None\n";
    return 0;
}
