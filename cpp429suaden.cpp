#include<bits/stdc++.h>
using namespace std; 
int main() { 
	int n,b,k,m,dem=0,res=100000,h;
	cin>>n;cin>>k;cin>>b;
	int a[n];
	for(int i=0;i<n;i++) a[i]=1;
	for(int i=0;i<b;i++){
		cin>>m;a[m-1]=0;
	}
	for(int i=0;i<k;i++){
		if(!a[i]) dem++;
	}
	res=min(res,dem);
	for(int i=k;i<n;i++){
		if(a[i]&&!a[i-k]){
			dem--;
		}
		else if(!a[i]&&a[i-k]) dem++;
		res=min(res,dem);
	}
	cout<<res<<endl;
}
