#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string>v;
    do{
        v.push_back(s);
    }while (next_permutation(s.begin(),s.end()));
    cout<<v.size()<<'\n';
    for(auto s:v)cout<<s<<"\n";
 
    
    return 0;
}
