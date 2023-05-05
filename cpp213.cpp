#include <bits/stdc++.h>
using namespace std;
bool fibo(int n){
	int a=0,b=1,c=0;
	while(c<n){
		c=a+b;
		a=b;b=c;
	}
	if(c==n) return 1;
	return 0;
}
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(fibo(a[i])) cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
}
