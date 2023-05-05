#include <iostream>
#include <math.h>
#include <string>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,dem=0;
		cin>>n;
		for(int i=2;i<=n;i++){
			dem=0;
			while(n%i==0){
				dem++;
				n/=i;
			}
			if(dem>0) cout<<i<<" "<<dem<<" ";
		}
		cout<<endl;
	}
}
