#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string msv,ten,lop,ns;
		double gpa;
		void nhap(){
			getline(cin,ten);
			cin>>lop>>ns>>gpa;
		}
		void xuat(){
			if(ns[1]=='/') ns="0"+ns;
			if(ns[4]=='/') ns.insert(3,"0");
			cout<<"B20DCCN001 "<<ten<<" "<<lop<<" "<<ns<<" ";
			printf("%.2lf",gpa);
		}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
