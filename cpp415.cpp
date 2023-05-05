#include  <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n,m,a[10000],b[10000],c[10000],k=0;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			c[k++]=a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			c[k++]=b[i];
		}
		sort(c,c+k);
		for(int i=0;i<k;i++) cout<<c[i]<<" ";
		cout<<"\n";
	}
}
