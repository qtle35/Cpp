#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[1000];
		cin>>n;
		long long k,m;
		for(int i=0;i<n;i++) cin>>a[i];
		k=a[0];
		for(int i=0;i<n;i++){
			m=a[i];
			for(int j=i+1;j<n;j++){
				k=max(k,m);
				m*=a[j];
			}
			k=max(k,m);
		}
		cout<<k<<endl;
	}
}
