#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve(){
	int n, s, m;
	cin >> n >> s >> m;
 
	int curr = 0;
	bool flag = false;
	for(int i=0; i<n; i++){
		int x, y;
		cin >> x >> y;
		if(x-curr >= s){
			flag = true;
		}else curr = y;
	}
 
	if(m-curr >= s) flag = true;
 
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
 
}
 
int main(){
	int t;
	cin >> t;
 
	while(t--){
		solve();
	}
 
	return 0;
}