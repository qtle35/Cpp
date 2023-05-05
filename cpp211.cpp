#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,b[100000],a[100000],maxk=0,i,j;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		b[0]=a[0];
		for(int i=1;i<n;i++){
			b[i]=min(a[i],b[i-1]);
		}
		i=n-1;j=n-1;
		while(i>=0&&j>=0){
			if(a[j]>=b[i]){
				maxk=max(maxk,j-i);
				i--;
			}
			else j--;
		}
		cout<<maxk<<"\n";
	}
}

