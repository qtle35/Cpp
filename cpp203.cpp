#include <bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
main(){
	int t;cin>>t;
	while(t--){
		int l,r,dem=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++){
			if(snt(i)) dem++;
		}
		cout<<dem<<"\n";
	}
}
