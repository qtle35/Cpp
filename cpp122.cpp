#include<iostream>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<=n;i++){
			while(n%i==0){
				cout<<i<<" ";
				n/=i;
			}
		}
		cout<<"\n";
	}
}
