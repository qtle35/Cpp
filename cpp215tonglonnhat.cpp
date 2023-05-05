#include <bits/stdc++.h>
using namespace std;
int kt(int a[], int b[], int n, int m){
	int suk=0,k=0,h=0;
	for(int i=0;i<n;i++){
		k+=a[i];
		h=0;
		for(int j=i+1;j<m;j++) h+=b[j];
		if(h+k>suk) suk=h+k;
	}
	return suk;
}
void nhap(int a[], int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		nhap(a,n);nhap(b,m);
		int k=kt(a,b,n,m);
		int h=kt(b,a,m,n);
		if(k>h) h=k;
		cout<<h<<endl;
	}
}

