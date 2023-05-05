#include<bits/stdc++.h> 
using namespace std; 
string a[5]={"Xe_con","Xe_con","Xe_tai","Xe_khach","Xe_khach"};
int b[5]={5,7,2,29,45},c[5]={10000,15000,20000,50000,70000};

struct Thongtin{
	string bien,loai,huong,ngay,cn;
	int ghe,gt=0,sum;
};
void nhap(Thongtin ds[],int n){
	for(int i=0;i<n;i++){
		cin>>ds[i].bien;
		cin>>ds[i].loai;
		cin>>ds[i].ghe;
		cin>>ds[i].huong;
		cin>>ds[i].ngay;
	}
	for(int l=0;l<n;l++){
		if(ds[l].huong=="IN"){
			for(int i=0;i<5;i++){
				if(ds[l].loai==a[i]&&ds[l].ghe==b[i]) ds[l].gt+=c[i];
			}
		}
	}
}
void in(Thongtin ds[],int n){
	string cn[1000];
	cn[0]=ds[0].ngay;
	int k=0,h[1000];
	for(int i=0;i<n;i++){
		if(ds[i].huong=="IN"&&ds[i].ngay==cn[k]){
			h[k]+=ds[i].gt;
		}
		else if(ds[i].ngay!=cn[k]){
			k++;
			cn[k]=ds[i].ngay;
			h[k]+=ds[i].gt;
		}
	}
	for(int i=0;i<=k;i++){
		cout<<cn[i]<<": "<<h[i]<<endl;
	}
}
int main() { 
	int n;
	cin>>n;
	Thongtin ds[n];
	nhap(ds,n);
	in(ds,n);
}
