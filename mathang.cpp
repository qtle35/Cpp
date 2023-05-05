#include <bits/stdc++.h>
#include <math.h>
using namespace std;
struct MatHang{
	string ten,nh;
	double gm,gb,ln;
	int mmh;
};
void nhap(MatHang ds[],int n){
	for(int i=0;i<n;i++){
		ds[i].mmh=i+1;
		scanf("\n");
		getline(cin,ds[i].ten);getline(cin,ds[i].nh);
		cin>>ds[i].gm;cin>>ds[i].gb;
		ds[i].ln=ds[i].gb-ds[i].gm;
	}
}
void inds(MatHang ds[],int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].mmh<<" "<<ds[i].ten<<" "<<ds[i].nh<<" ";
		printf("%.2lf",ds[i].ln);
		cout<<"\n";
	}
}
void sapxep(MatHang ds[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].ln<ds[j].ln) swap(ds[i],ds[j]);
		}
	}
}
int main(){
    struct MatHang ds[50];
    int N,i;
    cin >> N;
    nhap(ds,N);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
