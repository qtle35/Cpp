#include <bits/stdc++.h>
using namespace std;
int x;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=1;i<n;i++){
			k=abs(a[i]-x);
			int j=i-1;
			if(abs(a[j]-x)>k){
				int m=a[i];
				while(abs(a[j]-x)>k&&j>=0){
					a[j+1]=a[j];
					j--;
				}
				a[j+1]=m;
			}
		}
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
