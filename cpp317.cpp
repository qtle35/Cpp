#include <bits/stdc++.h>
#include <math.h>
using namespace std;
bool tn(string s){
	int k=s.size();
	for(int i=0;i<k/2;i++){
		if(s[i]!=s[k-i-1]) return 0;
	}
	return 1;
}
bool chan(string s){
	int k=s.size();
	for(int i=0;i<k;i++){
		if((s[i]-'0')%2!=0) return 0;
	}
	return 1;
}
main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(tn(s)&&chan(s)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

