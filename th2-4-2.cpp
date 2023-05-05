#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100000],k,dem=0,l,r;
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]+a[j]>=k){
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
}
