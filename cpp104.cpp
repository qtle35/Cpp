#include <iostream>
#include <string>
using namespace std;
bool check(string a){
	for(int i=0;i<a.size();i++){
		if(!(a[i]=='6'||a[i]=='0'||a[i]=='8')) return 0;
	}
	return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		if(check(a)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
