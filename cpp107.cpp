#include <iostream>
#include <math.h>
#include <string>
using namespace std;
bool snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
bool giam(int n){
	int a=n%10;
	n/=10;
	while(n){
		int b=n%10;
		if(b<=a) return 0;
		a=b;
		n/=10;
	}
	return 1;
}
bool tang(int n){
	int a=n%10;
	n/=10;
	while(n){
		int b=n%10;
		if(b>=a) return 0;
		a=b;
		n/=10;
	}
	return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,a=0,b=0,dem=0;
		cin>>n;
		for(int i=1;i<=n;i++) a=a*10+1;
		for(int i=1;i<=n;i++) b=b*10+9;
		for(int i=a;i<=b;i++){
			if(snt(i)&&(giam(i)||tang(i))) dem++;
		}
		cout<<dem<<"\n";
	}
}
