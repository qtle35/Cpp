#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		printf("%.4lf\n",sqrt((a-c)*(a-c)+(b-d)*(b-d)));
	}
}
