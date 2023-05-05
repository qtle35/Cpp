#include <bits/stdc++.h>
#include <math.h>
using namespace std;
struct NhanVien{
	string ten,gt,ns,dc,ms,ky;
};
void nhap(NhanVien &a){
	getline(cin,a.ten);getline(cin,a.gt);getline(cin,a.ns);getline(cin,a.dc);getline(cin,a.ms);getline(cin,a.ky);
}
void in(NhanVien a){
	cout<<"00001 "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.ms<<" "<<a.ky;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
