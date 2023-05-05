#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b){
	if(a+b>b+a) return 1;
	return 0;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		string s[100000],res="";
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n,compare);
		for(int i=0;i<n;i++) cout<<s[i];
		cout<<endl;
	}
}
