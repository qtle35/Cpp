#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		char h[100000];
		int sum=0,k=0;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9') sum=sum+(s[i]-'0');
			else h[k++]=s[i];
		}
		sort(h,h+k);
		for(int i=0;i<k;i++) cout<<h[i];
		cout<<sum<<endl;
	}
}
