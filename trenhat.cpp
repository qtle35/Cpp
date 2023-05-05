#include <bits/stdc++.h>
#include <math.h>
using namespace std;
struct NhanVien{
	string ten,ns;
	int ss;
};
void nhap(NhanVien &a){
	cin>>a.ten;cin>>a.ns;
}
void inds(NhanVien ds[],int n){
	cout<<ds[0].ten<<"\n";
	cout<<ds[n-1].ten;
	cout<<"\n";
}
void sapxep(NhanVien ds[], int n){
	for(int i=0;i<n;i++){
		int k=0;
		for(int m=6;m<=9;m++) k=k*10+(ds[i].ns[m]-'0');
		for(int m=3;m<5;m++){
			k=k*10+(ds[i].ns[m]-'0');
		}
		for(int m=0;m<3;m++){
			k=k*10+(ds[i].ns[m]-'0');
		}
		ds[i].ss=k;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].ss<ds[j].ss) swap(ds[i],ds[j]);
		}
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
