#include <bits/stdc++.h>
#include <math.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100000],kt=1,vt;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			for(int j=0;j<i;j++){
				if(kt&&a[i]==a[j]){
					kt=0;
					vt=i;
				}
			}
		}
		if(kt) cout<<"-1\n";
		else cout<<a[vt]<<"\n";
	}
}
