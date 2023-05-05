#include <bits/stdc++.h>
#include <math.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100000],dem=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1]&&a[i]!=0){
				a[i]=2*a[i];
				a[i+1]=0;
				i++;
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]!=0) cout<<a[i]<<" ";
			else dem++;
		}
		for(int i=0;i<dem;i++){
			cout<<"0 ";
		}
		cout<<"\n";
	}
}
