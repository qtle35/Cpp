#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,l,r,min,max;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		l=0;r=n-1;
		for( l=0;l<n-1;l++){
			if(a[l]>a[l+1]) break;
		}
		for(r=n-1;r>0;r--){
			if(a[r]<a[r-1]) break;
		}
		min=a[l],max=a[l];
		for(int i=l+1;i<=r;i++){
			if(a[i]>max) max=a[i];
			if(a[i]<min) min=a[i];
		}
		for(int i=0;i<l;i++){
			if(a[i]>min) l=i;
		}
		for(int i=n-1;i>=r;i--){
			if(a[i]<max) r=i;
		}
		cout<<l+1<<" "<<r+1<<endl;
	}
}
