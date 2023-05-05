#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		int sum=0,k;
		cin>>s;
		for(int i=0;i<s.size();i++){
			k=0;
			while(s[i]>='0'&&s[i]<='9'){
				k=k*10+(s[i]-'0');
				i++;
			}
			sum+=k;
		}
		cout<<sum<<endl;
	}
}
