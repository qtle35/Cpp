#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100][100],b[100],c[100],dem=0;
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		for(int i=0;i<n;i++){
			b[i]=1;c[i]=1;
		}
		for(int i=0;i<n;i++){
			if(c[i]){
				for(int j=i+1;j<n;j++){
					if(a[0][i]==a[0][j]){
						c[j]=0;
					}
				}
			}
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<n;j++){
				if(c[j]){
					for(int k=0;k<n;k++){
						if(a[0][j]==a[i][k]) {
							b[j]++;
							break;
						}
					}
				}
			}
		}
		for(int i=0;i<n;i++){
			if(b[i]>=n) dem++;
		}
		cout<<dem<<"\n";
	}
}
