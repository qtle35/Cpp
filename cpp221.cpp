#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m],b[n*m],d=0,c[n][m],e=0,f=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		b[0]=a[1][0];
		int hang=n-1,cot=m-1,s=1,h=n-1,ct=m-1;
		while(d<=n/2){
			for(int i=d;i<=cot;i++) b[s++]=a[d][i];
			for(int i=d+1;i<=hang;i++) b[s++]=a[i][cot];
			for(int i=cot-1;i>=d;i--) b[s++]=a[hang][i];
			for(int i=hang-1;i>d;i--) if(d!=0&&i!=1) b[s++]=a[i][d];
			hang--; cot--; d++;
		}
		while(e<=n/2){
			for(int i=e;i<=ct;i++) c[e][i]=b[f++];
			for(int i=e+1;i<=h;i++) c[i][ct]=b[f++];
			for(int i=ct-1;i>=e;i--) c[h][i]=b[f++];
			for(int i=h-1;i>e;i--) c[i][e]=b[f++];
			h--; ct--; e++;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<c[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
