#include <bits/stdc++.h>
using namespace std;
int k=1;
class NhanVien{
	public:
		string mnv,ten,gt,ns,dc,mst,hd;
		int ss;
		double gpa;
		friend istream &operator>>(istream &is,NhanVien &a){
			scanf("\n");
			getline(is,a.ten);is>>a.gt;is>>a.ns;
			scanf("\n");
			getline(is,a.dc);is>>a.mst;is>>a.hd;
			a.mnv="000";
			if(k<10) a.mnv+="0";
			a.mnv+=to_string(k);
			k++;
			return is;
		}
		friend ostream &operator<<(ostream &os,const NhanVien &a){
			os<<a.mnv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.hd<<endl;
			return os;
		}
};
void sapxep(NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		int h=0;
		for(int m=6;m<=9;m++) h=h*10+(ds[i].ns[m]-'0');
		for(int m=0;m<5;m++){
			if(ds[i].ns[m]!='/') h=h*10+(ds[i].ns[m]-'0');
		}
		ds[i].ss=h;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].ss>ds[j].ss) swap(ds[i],ds[j]);
		}
	}
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
