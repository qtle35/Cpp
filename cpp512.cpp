#include <bits/stdc++.h>
#include <math.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
long long ucln(long long a,long long b){
	while(b){
		long long t=a%b;a=b;b=t;
	}
	return a;
}
void nhap(PhanSo &p){
	cin>>p.tu>>p.mau;
}
void in(PhanSo p){
	cout<<p.tu<<"/"<<p.mau;
}
void rutgon(PhanSo &p){
	long long c=ucln(p.tu,p.mau);
	p.tu=p.tu/c;
	p.mau=p.mau/c;
}
PhanSo tong(PhanSo p,PhanSo q){
	PhanSo tong;
	tong.tu=p.tu*q.mau+q.tu*p.mau;
	tong.mau=p.mau*q.mau;
	return tong;
}
PhanSo process(PhanSo p,PhanSo q){
	PhanSo c=tong(p,q);
	c.tu*=(c.tu);c.mau*=(c.mau);
	rutgon(c);
	in(c);
	cout<<" ";
	PhanSo d;
	d.tu=c.tu*p.tu*q.tu;
	d.mau=c.mau*p.mau*q.mau;
	rutgon(d);
	in(d);
	cout<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
