#include <bits/stdc++.h>
using namespace std;
int b[1000000],a[1000][1000];
main(){
	int t;cin>>t;
	while(t--){
		int n,k,m=0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				cin>>a[i][j];
				b[m++]=a[i][j];
			}
		}
		sort(b,b+n*k);
		for(int i=0;i<n*k;i++) cout<<b[i]<<" ";
		cout<<"\n";
	}
}
