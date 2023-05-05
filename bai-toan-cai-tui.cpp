#include <iostream>
#include <cmath>

using namespace std;
int n;//so luong do vat
int b;//trong luong gioi han
int a[100];//trong luong tung vat
int c[100];//gia tri su dung tung vat
int x[100];//xau nhi phan(phuong an duyet)
int xopt[100];//phuong an toi uu
int fopt=0;//gia tri toi uu
//kiem tra trong luong tui
bool check(){
	int s=0;
	for(int i=1;i<=n;i++)
		s+=a[i]*x[i];
	return (s<=b);
}
//tinh gia tri su dung
int totalValue(){
	int Value=0;
	for(int i=1;i<=n;i++)
		Value+=c[i]*x[i];
	return Value;
}
//cap nhat phuong an toi uu
void update(int value){
	fopt=value;
	for(int i=1;i<=n;i++)
		xopt[i]=x[i];
}
void khoiTao(){
	for(int i=1;i<=n;i++)
		x[i]=0;
}
void hienThi(){
	for(int i=1;i<=n;i++)
		cout<<xopt[i]<<" ";
	cout<<endl;
}
bool kiemTra(){
	for(int i=1;i<=n;i++)
		if(x[i]!=1) return false;
	return true;
}
void Sinh(){
	int i=n;
	while(x[i]==1){
		x[i]=0;
		i--;
	}
	x[i]=1;
}
int main(){
	cout<<"n= ";cin>>n;
	cout<<"b= ";cin>>b;
	cout<<"nhap trong luong tung vat"<<endl;
	for(int i=1;i<=n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"nhap gia tri su dung tung vat"<<endl;
	for(int i=1;i<=n;i++){
		cout<<"c["<<i<<"]= ";
		cin>>c[i];
	}
	khoiTao();
	while(!kiemTra()){
		Sinh();
		if(check()){
			int value=totalValue();
			if(value>fopt){
				update(value);			
			}
		}
	}
	cout<<fopt<<endl;
	hienThi();
}
