#include <bits/stdc++.h>
#include <math.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		string s;
		int k,dem=0;
		bool check[100000]={0};
		cin>>s>>k;
		for(int i=0;i<s.size();i++) check[s[i]]=1;
		for(int i='a';i<='z';i++) if(!check[i]) dem++;
		if(k>=dem) cout<<"1\n";
		else cout<<"0\n";
	}
}
