#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string k[20]={"A","B","B","A","D","C","C","A","B","D","C","C","A","B","D"};
		string h[20]={"A","C","C","A","B","C","D","D","B","B","C","D","D","B","B"};
		string a[16];
		double diem,dem=0;
		for(int i=0;i<16;i++) cin>>a[i];
		if(a[0]=="101"){
			for(int i=1;i<16;i++){
				if(a[i]==k[i-1]) dem++;
			}
			diem=dem/15*10;
		}
		else{
			for(int i=1;i<16;i++){
				if(a[i]==h[i-1]) dem++;
			}
			diem=dem/15*10;
		}
		printf("%.2lf\n",diem);
	}
}
