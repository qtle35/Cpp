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
void sapxep(SinhVien ds[],int n){
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(ds[i].lop>ds[j].lop) swap(ds[i],ds[j]);
				else if(ds[i].lop==ds[j].lop){
					if(ds[i].msv>ds[j].msv) swap(ds[i],ds[j]);
				}
			}
		}
	}
int main(){
    SinhVien ds[1005];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
