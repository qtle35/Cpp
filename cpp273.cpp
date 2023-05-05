#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100000],lsum=0,sum=0,kt=1;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		for(int i=0;i<n;i++){
			sum-=a[i];
			if(lsum==sum){
				cout<<i+1<<"\n";
				kt=0;
				break;
			}
			lsum+=a[i];
//			cout<<" "<<sum<<" "<<lsum;
		}
		if(kt) cout<<"-1\n";
	}
}

