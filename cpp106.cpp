#include <iostream>
#include <string>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string a[10];
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cout<<a[i]<<endl;
	}
}
