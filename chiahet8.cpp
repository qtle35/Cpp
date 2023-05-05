#include <bits/stdc++.h>
using namespace std;
int chiahet(int k, string s){
	int dem=0,n;
	for(int i=0;i<s.size();i++){
		n=0;
		for(int j=i;j<s.size();j++){
			n=n*10+s[j]-'0';
			n=n%k;
			if(n==0) dem++;
		}
	}
	return dem;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<chiahet(8,s)-chiahet(24,s)<<endl;
	}
}
