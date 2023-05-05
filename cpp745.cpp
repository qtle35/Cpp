#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long k=pow(10,9)+7,f[100000],n;
		cin>>n;
		f[0]=0;f[1]=1;
		for(int i=2;i<=n;i++) f[i]=(f[i-1]%k)+(f[i-2]%k);
		cout<<f[n]%k<<"\n";
	}
}
