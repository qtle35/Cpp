#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,m,a[100][100],k=0,p=0,c[10000],h;
		cin>>n>>m>>h;
		int d1=n,c1=m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>a[i][j];
		} 
		while(k < d1*c1){
			for(int i=p;i<m;i++) c[k++]=a[p][i];
			for(int i=p+1;i<n;i++) c[k++]=a[i][m-1];
			for(int i=m-2;i>=p;i--) c[k++]=a[n-1][i];	
			for(int i=n-2;i>p;i--) c[k++]=a[i][p];
			p++;n--; m--;
		}
		cout<<c[h-1]<<"\n";
	}
}

