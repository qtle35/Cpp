#include <iostream>
#include <math.h>
#include <string>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n,k,m=0;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			m+=i%k;
		}
		cout<<m<<"\n";
	}
}
