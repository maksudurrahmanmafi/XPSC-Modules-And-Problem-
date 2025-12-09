#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    int one =0,minus =0;
	    for(int i =0;i<n;i++){
	        cin>>v[i];
	        if(v[i]==1)one++;
	        else minus++;
	    }
	    int ans = abs(one-minus);
        // cout<<ans<<endl;
	    if(ans%2!=0)cout<<-1<<'\n';
	    else cout<<ans/2<<'\n';
	}

}
