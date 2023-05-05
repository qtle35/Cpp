#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100000],b[100000],kt=1,x,vt=-1;
		cin>>n>>x;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(kt&&a[i]==x){
				kt=0;
				vt=i+1;
			}
		}
		if(kt) cout<<"-1\n";
		else cout<<vt<<"\n";
	}
}

