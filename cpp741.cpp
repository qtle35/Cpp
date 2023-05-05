#include <bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c,k=1;
		cin>>a>>b>>c;
		for(int i=0;i<b;i++) k=(k*a)%c;
		cout<<k<<"\n";
	}
}
