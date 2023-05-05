#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten,msv,lop;
	double d1,d2,d3;
};
void nhap(SinhVien &a){
	scanf("\n");
    getline(cin, a.msv);
    getline(cin, a.ten);
    getline(cin, a.lop);
    cin >> a.d1 >> a.d2>>a.d3;
}
void in_ds(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" ";
		printf("%.1lf ",ds[i].d1);printf("%.1lf ",ds[i].d2);printf("%.1lf ",ds[i].d3);
		cout<<"\n";
	}
}
void sap_xep(SinhVien ds[], int n){
//	for(int i=0;i<n;i++){
//		ds[i].mnv="000";
//		if(i<9) ds[i].mnv+="0";
//		stringstream ss;
//		ss<<(i+1);
//		string str = ss.str();
//		ds[i].mnv+=str;
//		int k=0;
//		for(int m=6;m<=9;m++) k=k*10+(ds[i].ns[m]-'0');
//		for(int m=0;m<5;m++){
//			if(ds[i].ns[m]!='/') k=k*10+(ds[i].ns[m]-'0');
//		}
//		ds[i].ss=k;
//	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].ten>ds[j].ten) swap(ds[i],ds[j]);
		}
	}
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
