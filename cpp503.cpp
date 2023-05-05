#include <bits/stdc++.h>
#include <math.h>
using namespace std;
struct PhanSo{
	long long ms,ts;
};
long long ucln(long long a,long long b){
	while(b){
		long long t=a%b;a=b;b=t;
	}
	return a;
}
void nhap(PhanSo &p){
	cin>>p.ts>>p.ms;
}
void in(PhanSo p){
	cout<<p.ts<<"/"<<p.ms;
}
void rutgon(PhanSo &p){
	long long c=ucln(p.ts,p.ms);
	p.ts=p.ts/c;
	p.ms=p.ms/c;
}
int main(){
	struct PhanSo p
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
