#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
	int t=*a;*a=*b;*b=t;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[10000],vt1,vt2;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=n-1;i>=0;i--){
			if(a[i]<a[i+1]){
				vt1=i;
				break;
			}
		}
		vt2=n-1;
		while(a[vt2]<a[vt1]) vt2--;
		swap(a[vt2],a[vt1]);
		int l=vt1+1;int r=n-1;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
