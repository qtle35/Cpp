#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	public:
		string mnv,ten,gt,ns,dc,hd,mst;
		void nhap(){
			getline(cin,ten);
			getline(cin,gt);
			getline(cin,ns);
			getline(cin,dc);
			getline(cin,mst);
			getline(cin,hd);
		}
		void xuat(){
			cout<<"00001 "<<ten<<" "<<gt<<" "<<ns<<" "<<dc<<" "<<mst<<" "<<hd<<endl;
		}
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
