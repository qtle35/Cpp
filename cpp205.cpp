#include <bits/stdc++.h>
using namespace std;
int a[10000000];
main(){
	int t;cin>>t;
	while(t--){
		int n,max=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>max) max=a[i];
		}
		cout<<max<<"\n";
	}
}
