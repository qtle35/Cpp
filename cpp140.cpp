#include <iostream>
#include <math.h>
#include <string>
using namespace std;
bool snt(long long n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
main(){
	int t;cin>>t;
	while(t--){
		long long n,check=1;
		cin>>n;
		for(int i=2;i<20;i++){
			if(snt(i)&&snt(pow(2,i)-1)){
				if(pow(2,2*i)-pow(2,i)==2*n){
					cout<<"1\n";
					check=0;
					break;
				}
			}
		}
		if(check) cout<<"0\n";
	}
}

