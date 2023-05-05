#include<iostream>
using namespace std;
int ucln(long long a, long long b){
	while(b!=0){
		int t=a%b;
		a=b;
		b=t;
	}
	return a;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long m=1;
		for(int i=2;i<=n;i++){
			m=(m*i)/ucln(m,i);
		}
		cout<<m<<"\n";
	}
}
