#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten,gt,ns,dc,ms,ky,mnv;
	int ss;
};
void nhap(NhanVien &a){
	scanf("\n");
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.ms >> a.ky;
    cin.ignore();
}
void inds(NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].mnv<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].ms<<" "<<ds[i].ky;
		cout<<"\n";
	}
}
void sapxep(NhanVien ds[], int n){
	for(int i=0;i<n;i++){
		ds[i].mnv="000";
		if(i<9) ds[i].mnv+="0";
		stringstream ss;
		ss<<(i+1);
		string str = ss.str();
		ds[i].mnv+=str;
		int k=0;
		for(int m=6;m<=9;m++) k=k*10+(ds[i].ns[m]-'0');
		for(int m=0;m<5;m++){
			if(ds[i].ns[m]!='/') k=k*10+(ds[i].ns[m]-'0');
		}
		ds[i].ss=k;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].ss>ds[j].ss) swap(ds[i],ds[j]);
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
