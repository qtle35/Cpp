#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int a[100][100],n,b[10000],h=0,k;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				b[h++]=a[i][j];
			}
		}
		sort(b,b+n*n);
		cout<<b[k-1]<<"\n";
	}
}
