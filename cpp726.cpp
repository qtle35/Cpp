#include <bits/stdc++.h>
using namespace std;
long long chia(long long a,long long b,long long c){
	if(b==0) return 0;
	long long s=chia(a,b/2,c);
	if(b%2!=0) return (a%c+2*(s%c))%c;
	else return (2*(s%c))%c;
}
main(){
	int t;cin>>t;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<chia(a,b,c)<<"\n";
	}
}

