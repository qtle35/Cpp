#include <bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu,mau;
	public:
		PhanSo(long long a,long long b){
			tu=a;mau=b;
		}
		friend istream &operator>>(istream &is,PhanSo &p){
			is>>p.tu>>p.mau;
			return is;
		}
		friend  PhanSo operator + (PhanSo &a,PhanSo &b){
			PhanSo k(1,1);
			long long t;
			k.tu=a.tu*b.mau+b.tu*a.mau;
			k.mau=a.mau*b.mau;
			t=__gcd(k.tu,k.mau);
			k.tu/=t;
			k.mau/=t;
			return k;
		}
		friend ostream &operator<<(ostream &os,const PhanSo &p){
			os<<p.tu<<"/"<<p.mau;
			return os;
		}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
