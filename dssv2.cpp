#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten,ml,ns;
	double gpa;
};
void nhap(SinhVien ds[],int n){
	for(int i=1;i<=n;i++){
		cin.ignore();
		getline(cin, ds[i].ten);
		getline(cin,ds[i].ml);
		getline(cin,ds[i].ns);
		cin>>ds[i].gpa;	
	}
}
void in(SinhVien ds[],int n){
	for(int i=1;i<=n;i++){
		if(ds[i].ns.size()<10){
			if(ds[i].ns[1]=='/') ds[i].ns="0"+ds[i].ns;
			if(ds[i].ns[4]=='/') ds[i].ns.insert(3,"0");
		}
		int m=0;
		string s[100],token;
		for(int j=0;j<ds[i].ten.size();j++){
			if(ds[i].ten[j]>=65&&ds[i].ten[j]<=90) ds[i].ten[j]+=32;
		}
		stringstream ss(ds[i].ten);
		while(ss>>token) s[m++]=token;
		ds[i].ten="";
		for(int j=0;j<m;j++){
			s[j][0]-=32;
			ds[i].ten+=s[j]+" ";
		}
		string msv="B20DCCN0";
		if(i<=9) msv=msv+"0";
		cout<<msv<<i<<" "<<ds[i].ten<<" "<<ds[i].ml<<" "<<ds[i].ns<<" ";
		printf("%.2lf",ds[i].gpa);cout<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
