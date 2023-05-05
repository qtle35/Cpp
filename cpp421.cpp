#include  <bits/stdc++.h>
using namespace std;
long long a[100000],b[100000];
main(){
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];b[i]=-1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[j]==i) b[i]=a[j];
			}
		}
		for(int i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<"\n";
	}
}
