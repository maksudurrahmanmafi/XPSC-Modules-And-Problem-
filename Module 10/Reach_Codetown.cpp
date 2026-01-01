#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return true;
    else return false;
}
bool isPossible( string s){
    if(isVowel(s[1])&&isVowel(s[3])&&isVowel(s[5])&& !isVowel(s[0])&& !isVowel(s[2]) && !isVowel(s[4])
    && !isVowel(s[6]) && !isVowel(s[7])) return true;
    else return false;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	  
	   if(isPossible(s)) cout<<"YES\n";
	   else cout<<"NO\n";
	}

}
