#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void sang(int n,bool nt[]){
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
		int n;
		cin>>n;
		bool nt[10000];
		sang(n,nt);
		for(int i=1;i<=n;i++){
			if(nt[i]) cout<<i<<" ";
		}
		cout<<"\n";
	}
}

