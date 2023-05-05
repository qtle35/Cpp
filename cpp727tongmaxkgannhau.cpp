#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		long long m=a[0],k=0,p;
		for(int i=1;i<n;i++){
			p=max(m,k);
			m=k+a[i];
			k=p;
		}
		cout<<max(m,k)<<endl;
	}
}
