#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s,h[100000],token;
		cin>>s;
		stringstream ss(s);
		while(getline(ss,token,'.')){
			cout<<token<<endl;
		}
	}
}
