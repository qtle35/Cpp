#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string msv,ten,lop,mail;
		friend istream &operator>>(istream &is,SinhVien &a){
			is>>a.msv;
			scanf("\n");
			getline(is,a.ten);is>>a.lop;is>>a.mail;
			return is;
		}
		friend ostream &operator<<(ostream &os,const SinhVien &a){
			os<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.mail<<endl;
			return os;
		}
};
int main(){
    SinhVien ds[1005];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
    	string s,h="",k="";cin>>s;
    	for(int l=2;l<4;l++) h+=s[l];
    	cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
    	for(int j=0;j<N;j++){
    		k="";
    		for(int l=1;l<3;l++) k+=ds[j].lop[l];
    		if(h==k) cout<<ds[j];
		}
	}
    return 0;
}

