#include <iostream>
#include <math.h>
using namespace std;
long long ucln(long long a, long long b) {
    if (b == 0) return a;
    return ucln(b, a % b);
}
long long bcnn(long long a, long long b) {
    return (a * b) / ucln(a, b);
}
int main() {
    int t;
    cin >> t;
    while (t--){
        long long a,b,c,n,nh;
        cin>>a>>b>>c>>n;
        long long m,k=0,h=1;
        m=bcnn(bcnn(a,b),c);
        for(int j=1;j<n;j++) k=k*10+9;
        for(int j=1;j<=n;j++) h*=10;
        if(k+1%m==0) cout<<k<<"\n";
        else{
        	nh=(k+1)/m+1;
        	if(nh*m>k&&nh*m<h) cout<<nh*m<<"\n";
        	else cout<<"-1\n";
		}
    }
}
