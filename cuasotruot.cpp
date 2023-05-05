#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a[1000][1000],b[1000][1000],sd,sc;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cin>>a[i][j];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++) cin>>b[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>m-1) sd=i%m;
			else sd=i;
			if(j>m-1) sc=j%m;
			else sc=j;
			a[i][j]*=b[sd][sc];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
