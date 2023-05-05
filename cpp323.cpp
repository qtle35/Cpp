#include<bits/stdc++.h>
using namespace std;
void xl(string n,long long m){
	long long k=0;
	for(int i=0;i<n.size();i++){
		k=(k*10+n[i]-'0')%m;
	}
	cout<<k<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		long long m;
		cin>>n>>m;
		xl(n,m);
	}
}
