#include <bits/stdc++.h>
using namespace std;
bool tn(long long n){
	string s=to_string(n);
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]) return 0;
	}
	return 1;
}
bool check(long long n){
	int b=0;
	string s=to_string(n);
	for(int i=0;i<s.size();i++){
		b+=(s[i]-'0');
	}
	if(b==17) return 1;
	return 0;
}
main(){
	int dem=0;
	for(long long i=100000000;i<=999999999;i++){
		if(check(i)&&tn(i)) dem++;
	}
	cout<<dem;
}
