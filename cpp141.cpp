#include <iostream>
#include <math.h>
#include <string>
using namespace std;
bool snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int ucln(int a,int b){
	while(b){
		int t=a%b;a=b;b=t;
	}
	return a;
}
main(){
	int t;cin>>t;
	while(t--){
		int n,dem=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			if(ucln(i,n)==1) dem++;
		}
		if(snt(dem)) cout<<"1\n";
		else cout<<"0\n";
	}
}

