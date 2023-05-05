#include<bits/stdc++.h> 
using namespace std;
struct SinhVien{
	string ten,lop,ns;
	double gpa;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin,a.ten);
	cin>>a.lop;cin>>a.ns;cin>>a.gpa;
	if(a.ns[1]=='/') a.ns="0"+a.ns;
	if(a.ns[4]=='/') a.ns.insert(3,"0");
}
void inThongTinSV(SinhVien a){
	cout<<"N20DCCN001 "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<setprecision(2)<<fixed<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
