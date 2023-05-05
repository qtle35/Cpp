#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n+5];
		long long dem=0;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			long long temp2 = lower_bound(a,a+n,a[i]+x)-a;
			if(temp2 - i-1>0) dem+=temp2 - i-1;
		}
		cout<<dem<<endl;
	}
}
