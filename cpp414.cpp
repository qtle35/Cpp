#include  <bits/stdc++.h>
using namespace std;
bool check(long long b[100000],long long a,long long dem){
	for(int i=0;i<dem;i++){
		if(a==b[i]) return 0;
	}
	return 1;
}
main(){
	int t;cin>>t;
	while(t--){
		long long n,a[100000],b[100000],dem=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			while(a[i]){
				int k=a[i]%10;
				if(check(b,k,dem)){
					b[dem++]=k;
				}
				a[i]/=10;
			}
		}
		sort(b,b+dem);
		for(int i=0;i<dem;i++) cout<<b[i]<<" ";
		cout<<"\n";
	}
}
