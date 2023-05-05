#include <iostream>
#include <math.h>
#include <string>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,k,d=0,m=-1;
		cin>>n>>k;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				d++;
				if(d==k){
					m=i;
					break;
				}
				n/=i;
			}
			if(m>0) break;
		}
		if(n>1){
			d++;
			if(d==k) m=n;
		}
		cout<<m<<"\n";
	}
}


