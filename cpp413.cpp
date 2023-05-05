#include <bits/stdc++.h>
using namespace std;
bool comp(const int a, const int b){
   return a > b;
}
main(){
	int t;cin>>t;
	while(t--){
		int n,a[1000],b[1000],dem=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);sort(b,b+n,comp);
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
			dem++;
			if(dem==n) break;
			cout<<a[i]<<" ";
			dem++;
			if(dem==n) break;
		}
		cout<<"\n";
	}
}
