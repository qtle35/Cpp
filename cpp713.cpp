#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[10000],vt1,vt2;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		while(1){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<" ";
			vt1=n-1;
			while(vt1>0&&a[vt1]>a[vt1+1]) vt1--;
			if(vt1==0) break;
			vt2=n;
			while(a[vt2]<a[vt1]) vt2--;
			swap(a[vt2],a[vt1]);
			int l=vt1+1;int r=n;
			while(l<r){
				swap(a[l],a[r]);
				l++;r--;
			}
		}
		cout<<endl;
	}
}
