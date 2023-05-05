#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100000],max=0,check=1;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]>a[i]&&max<a[j]-a[i]){
					max=a[j]-a[i];
					check=0;
				}
			}
		}
		if(check) cout<<"-1\n";
		else cout<<max<<"\n";
	}
}
