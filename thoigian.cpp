#include <bits/stdc++.h>
#include <math.h>
using namespace std;
struct NhanVien{
	int gio,phut,giay;
	long long ss;
};
void nhap(NhanVien &a){
	cin>>a.gio;cin>>a.phut;cin>>a.giay;
	a.ss=a.gio*3600+a.phut*60+a.giay;
}
void inds(NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].gio<<" "<<ds[i].phut<<" "<<ds[i].giay;
		cout<<endl;
	}
}
void sapxep(NhanVien ds[], int n){
//	for(int i=0;i<n;i++){
//		int k=0;
//		for(int m=6;m<=9;m++) k=k*10+(ds[i].ns[m]-'0');
//		for(int m=3;m<5;m++){
//			k=k*10+(ds[i].ns[m]-'0');
//		}
//		for(int m=0;m<3;m++){
//			k=k*10+(ds[i].ns[m]-'0');
//		}
//		ds[i].ss=k;
//	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].ss>ds[j].ss) swap(ds[i],ds[j]);
		}
	}
}
int main(){
    struct NhanVien ds[5005];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
