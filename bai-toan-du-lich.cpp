#include <iostream>
using namespace std;
int n,x[100],xopt[100],fopt=100000,c[100][100];
void khoiTao(){
	for(int i=1;i<=n;i++)
		x[i]=i;
}
void hienThi(){
	for(int i=1;i<=n;i++)
		cout<<xopt[i]<<" ";
	cout<<endl;
}
bool kiemTra(){
	for(int i=2;i<=n;i++){	
		if(x[i]!=n-i+1) return false;
	}
	return true;
}
void Sinh(){
	int i=n;
	while(x[i-1]>x[i]) i--;
	for(int j=n;j>=i;j--)
		if(x[j]>x[i-1]){ 
			swap(x[j],x[i-1]);
			break;
		}
	for(int j=i;j<=n-1;j++)
		for(int k=j+1;k<=n;k++)
			swap(x[j],x[k]);
}
int totalValue(){
	int Value=c[x[n]][x[1]];
	for(int i=1;i<=n-1;i++)		
		Value+=c[x[i]][x[i+1]];
	return Value;
}
void update(int Value){
	fopt=Value;
	for(int i=1;i<=n;i++)
		xopt[i]=x[i];
}
main(){
	cout<<"n= ";cin>>n;
	cout<<"nhap chi phi "<<endl;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>c[i][j];
	khoiTao();
	while(!kiemTra()){
		Sinh();
		int Value=totalValue();
		if(Value<fopt){
			update(Value);
		}
	}
	cout<<fopt<<endl;
	hienThi();
//	chcc()
}
