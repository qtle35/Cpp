#include <bits/stdc++.h>
using namespace std;
int a[1000000];
main(){
	int t;cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=d;i<n;i++) cout<<a[i]<<" ";
		for(int i=0;i<d;i++) cout<<a[i]<<" ";
		cout<<"\n";
	}
}
