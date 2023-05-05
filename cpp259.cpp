#include <bits/stdc++.h>
#include <math.h>
using namespace std;
main(){
		int a[100][100],b[100][100],c[100][100],m,n,p;
		cin>>n>>m>>p;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>a[i][j];
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<p;j++) cin>>b[i][j];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<p;j++){
				for(int k=0;k<m;k++) c[i][j]+=a[i][k]*b[k][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<p;j++) cout<<c[i][j]<<" ";
			cout<<"\n";
		}
}

