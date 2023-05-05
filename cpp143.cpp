#include <iostream>
#include <math.h>
#include <string>
using namespace std;
long long fibo(long long n){
	long long a=0,b=1,c=0,dem=0;
	while((dem+1)!=n){
		c=a+b;
		a=b;
		b=c;
		dem++;
	}
	return c;
}
main(){
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<fibo(n)<<"\n";
	}
}
