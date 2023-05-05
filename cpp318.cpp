#include <bits/stdc++.h>
using namespace std;
bool tang(int n){
	int a=n%10;
	n/=10;
	while(n){
		int b=n%10;
		if(b>=a) return 0;
		a=b;
		n/=10;
	}
	return 1;
}
bool bang(int n){
	int a=n%10;
	n/=10;
	while(n){
		int b=n%10;
		if(b!=a) return 0;
		a=b;
		n/=10;
	}
	return 1;
}
bool st(int n){
	while(n){
		int b=n%10;
		if(b!=6&&b!=8) return 0;
		n/=10;
	}
	return 1;
}
bool hve(int n){
	int a=n%10;
	n/=10;
	int b=n%10;
	n/=10;
	if(a!=b) return 0;
	if(n%111!=0) return 0;
	return 1;
}
main(){
	int t;cin>>t;
	while(t--){
		string s;
		int n=0,h=4;
		cin>>s;
		for(int i=5;i<s.size();i++){
			if(i!=8) n+=(int)(s[i]-'0')*pow(10,h--);
		}
		if(tang(n)||bang(n)||st(n)||hve(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
