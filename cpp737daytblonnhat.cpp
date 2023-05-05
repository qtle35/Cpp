#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n,k,l,r,m,res;
		cin>>n>>k;long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<k;i++) m+=a[i];
		res=m;
		for(int i=k;i<n;i++){
			m=m+a[i]-a[i-k];
			if(m>res){
				res=m;r=i;
			}
		}
		l=r-k+1;
		for(int i=l;i<=r;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
