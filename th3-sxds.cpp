#include<bits/stdc++.h> 
using namespace std; 
int main() { 
	int t;cin>>t;
	while(t--){
		int n,m,max=0,vt;
		cin>>n>>m;
		vector<int> a(n+1);
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>max){
				max=a[i];
				vt=i;
			} 
		}
		a.insert(a.begin()+vt,m);
		for(int i=0;i<=n;i++){
			if(a[i]<0) cout<<a[i]<<" ";
		}
		for(int i=0;i<=n;i++){
			if(a[i]>=0) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
