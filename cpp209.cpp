#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,m,l,r,a[10000];
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>a[i];
		while(m--){
			long long sum=0;
			cin>>l>>r;
			for(int i=l-1;i<r;i++){
				sum+=a[i];
			}
			cout<<sum<<"\n";
		}
	}
}
