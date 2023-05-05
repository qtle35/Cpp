#include<bits/stdc++.h> 
using namespace std; 
int main() { 
	int t;cin>>t;
	while(t--){
		int n,ma=0;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			b[i]=1;
			for(int j=0;j<i;j++){
				if(a[j]<a[i]){
					b[i]=max(b[i],b[j]+1);
				}
			}
			ma=max(ma,b[i]);
		}
		cout<<ma<<endl;
	}
}
