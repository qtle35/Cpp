#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,m,a1[10000],a2[10000],max,s=0;
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>a1[i];
		for(int i=0;i<m;i++) cin>>a2[i];
		int k=(n>m)?n:m;
		for(int i=0;i<k;i++){
			max=(a1[i]>a2[i])?a1[i]:a2[i];
			s+=max;
		}
		cout<<s<<"\n";
	}
}
