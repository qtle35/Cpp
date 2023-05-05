#include <iostream>
#include <math.h>
using namespace std;
long long ucln(long long a, long long b){
	while(b){
		long long t=a%b;a=b;b=t;
	}
	return a;
}
main(){
	int t;cin>>t;
	while(t--){
		long long a,x,y,m;
		cin>>a>>x>>y;
		m=ucln(x,y);
		for(int i=0;i<m;i++) cout<<a;
		cout<<"\n";
	}
}
