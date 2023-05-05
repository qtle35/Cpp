#include <bits/stdc++.h>
#include <math.h>
using namespace std;
struct ThiSinh{
	string ten,ns;
	double d1,d2,d3;
};
void nhap(ThiSinh &a){
	getline(cin,a.ten);getline(cin,a.ns);
	cin>>a.d1>>a.d2>>a.d3;
}
void in(ThiSinh a){
	double t=a.d1+a.d2+a.d3;
	cout<<a.ten<<" "<<a.ns<<" ";
	cout<<fixed<<setprecision(1) << t << endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
