#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		char s;
		cin>>s;
		if(s>='a'&&s<='z') cout<<(char)(s-32)<<"\n";
		else if(s>='A'&&s<='Z') cout<<(char)(s+32)<<"\n";
	}
}
