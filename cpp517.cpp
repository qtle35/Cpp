#include <bits/stdc++.h>
#include <math.h>
using namespace std;
struct NhanVien{
	string ten,gt,ns,dc,ms,ky;
};
void nhap(NhanVien &a){
	cin.ignore();
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.ms >> a.ky;
}
void inds(NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		if(i<9) cout<<"0000"<<i+1<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].ms<<" "<<ds[i].ky;
		else cout<<"000"<<i+1<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].ms<<" "<<ds[i].ky;
		cout<<"\n";
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
