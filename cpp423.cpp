#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100000],k,nh=0,lh=0,kq;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=k) ++nh;
		}
		for(int i=0;i<nh;i++){
			if(a[i]>k) ++lh;
		}
		kq=lh;
		for(int i=0,j=nh;j<n;i++,j++){
			if(a[i]>k) --lh;
			if(a[j]>k) ++lh;
			kq=min(kq,lh);
		}
		cout<<kq<<"\n";
	}
}
