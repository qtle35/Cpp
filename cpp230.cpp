#include <bits/stdc++.h>
using namespace std;
main(){
		int n,mot=0,k=0,dem=0,a[1000][5];
		cin>>n;
		for(int i=0;i<n;i++){
			mot=0;k=0;
			for(int j=0;j<3;j++){
				cin>>a[i][j];
				if(a[i][j]==1) mot++;
			}
			if(mot==2||mot==3) dem++;
		}
		cout<<dem<<"\n";
}
