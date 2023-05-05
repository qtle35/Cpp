#include <iostream>
#include <math.h>
#include <string>
using namespace std;
bool nt[1000000];
void loc(int n, bool nt[]){
	nt[0]=nt[1]=false;
	for(int i=2;i<=n;i++) nt[i]=true;
	for(int i=2;i*i<=n;i++){
		if(nt[i]){
			for(int j=i*i;j<=n;j+=i) nt[j]=false;
		}
	}
}
main(){
	int t;cin>>t;
	while(t--){
		int n,check=0;
		cin>>n;
		loc(n,nt);
		for(int i=0;i<n;i++){
			if(nt[i]&&nt[n-i]){
				cout<<i<<" "<<n-i<<"\n";
				check=1;
				break;
			}
		}
		if(!check) cout<<"-1\n";
	}
}

