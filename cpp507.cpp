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
PhanSo tong(PhanSo p,PhanSo q){
	PhanSo tong;
	tong.ts=p.ts*q.ms+q.ts*p.ms;
	tong.ms=p.ms*q.ms;
	rutgon(tong);return tong;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
