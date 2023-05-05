#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100000],b[100000],k,dem=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=1;
		}
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			if(b[i]){
				for(int j=i+1;j<n;j++){
					if(a[i]==a[j]){
						b[j]=0;
					}
				}
			}
		}
		for(int i=0;i<n;i++){
			if(b[i]) dem++;
		}
		k=a[n-1]-a[0]+1;
		cout<<k-dem<<"\n";
	}
}
