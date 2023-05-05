#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int tcs(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum;
		cin>>n;
		sum=tcs(n);
		while(sum>=10){
			sum=tcs(sum);
		}
		cout<<sum<<"\n";
	}
}
