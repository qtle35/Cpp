#include<bits/stdc++.h> 
using namespace std; 
int dif=0,a[100000];
struct Thongtin{
	string thetho,cau,loai;
	int sotu=0;
};
void nhap(Thongtin ds[],int n){
	for(int i=0;i<n;i++){
		string token="";
		scanf("\n");
		getline(cin,ds[i].cau);
		stringstream ss(ds[i].cau);
		while(ss>>token) ds[i].sotu++;
		if(ds[i].sotu==6||ds[i].sotu==8) ds[i].loai="lb";
		else ds[i].loai="tn";
	}
	if(ds[0].loai=="lb"){
		a[dif]=1;
		dif++;
	}
	else{
		a[dif]=2;
		dif++;
	}
	int m=1;
	for(int i=1;i<n;i++){
		if(ds[i].loai=="tn"&&ds[i-1].loai=="tn"){
			m++;
			if(m>4){
				a[dif]=2;
				dif++;
				m=1;
			}
		}
		if(ds[i].loai!=ds[i-1].loai){
			if(ds[i].loai=="lb"){
				a[dif]=1;
				dif++;
				m=1;
			}
			else{
				a[dif]=2;
				dif++;
				m=1;
			}
		}
	}
}
int main() { 
	int n;
	cin>>n;
	Thongtin ds[n];
	nhap(ds,n);
	cout<<dif<<endl;
	for(int i=0;i<dif;i++){
		cout<<a[i]<<endl;
	}
}
