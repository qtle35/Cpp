#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[100][100],th[100]={0},tc[100]={0},ms=0,dem=0;
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				th[i]+=a[i][j];
				tc[j]+=a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			ms=(ms>th[i])?ms:th[i];
			ms=(ms>tc[i])?ms:tc[i];
		}
		for(int i=0,j=0;i<n&&j<n;){
			int k=(ms-th[i]>ms-tc[j])?ms-tc[j]:ms-th[i];
			th[i]+=k;tc[j]+=k;dem+=k;
			if(th[i]==ms) i++;
			if(tc[j]==ms) j++;
		}
		cout<<dem<<"\n";
	}
}
