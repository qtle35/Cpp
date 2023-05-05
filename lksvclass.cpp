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
    	string s;cin>>s;
    	cout<<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
    	for(int j=0;j<N;j++){
    		if(ds[j].lop==s) cout<<ds[j];
		}
	}
    return 0;
}

