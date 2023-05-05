#include <bits/stdc++.h>
using namespace std;
main(){
		int n,m=0,a[100][100],k=0,p=0,c[10000],h;
		cin>>n;
		int d1=n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				c[m++]=a[i][j];
			}
		}
		sort(c,c+m);
		while(k < d1*d1){
			for(int i=p;i<n;i++) a[p][i]=c[k++];
			for(int i=p+1;i<n;i++) a[i][n-1]=c[k++];
			for(int i=n-2;i>=p;i--) a[n-1][i]=c[k++];	
			for(int i=n-2;i>p;i--) a[i][p]=c[k++];
			p++;n--;
		}
		for(int i=0;i<d1;i++){
			for(int j=0;j<d1;j++) cout<<a[i][j]<<" ";
			cout<<"\n";
		}
}

