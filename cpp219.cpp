#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,m,a[100][100],b[100][100];
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>a[i][j];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1){
					for(int k=0;k<m;k++) b[i][k]=1;
					for(int k=0;k<n;k++) b[k][j]=1;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cout<<b[i][j]<<" ";
			cout<<"\n";
		}
	}
}
