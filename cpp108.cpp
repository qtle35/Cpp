#include <iostream>
#include <math.h>
#include <string>
using namespace std;
bool cb(int n){
	int chan=0,le=0;
	while(n){
		int a=n%10;
		if(a%2==0) chan++;
		else le++;
		n/=10;
	}
	if(chan==le) return 1;
	return 0;
}
int main() {
		int n,a=1,b=1,dem=0;
		cin>>n;
		for(int i=1;i<n;i++) a*=10;
		for(int i=1;i<=n;i++) b*=10;
		for(int i=a;i<b;i++){
			if(cb(i)){
				dem++;
				cout<<i<<" ";
			}
			if(dem==10){
				dem=0;
				cout<<"\n";
			}
		}
}
