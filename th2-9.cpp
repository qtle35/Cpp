#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n,x,a[100000],r=pow(10,9)+7,s=0,k=1;
		cin>>n>>x;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			k=1;
			for(int j=0;j<n-i-1;j++) k=(k*x)%r;
			s+=a[i]*k;
		}
		cout<<s%r<<"\n";
	}
}
