#include <bits/stdc++.h>
#include <math.h>
using namespace std;
struct SinhVien{
	string ten,ns,lop;
	double d1;
};
string s2="";
void nhap(SinhVien &a){
	string s1[100],token;
	int n=0;
	getline(cin,a.ten);getline(cin,a.lop);getline(cin,a.ns);
	cin>>a.d1;
	stringstream ss(a.ns);
	while(getline(ss,token,'/')){
		s1[n++]=token;
	}
	for(int i=0;i<n-1;i++){
		if(s1[i].size()<2) s1[i]="0"+s1[i];
	}
	for(int i=0;i<n;i++){
		if(i!=n-1) s2=s2+s1[i]+"/";
		else s2+=s1[i];
	}
}
void in(SinhVien a){
	cout<<"B20DCCN001 "<<a.ten<<" "<<a.lop<<" "<<s2<<" ";
	cout<<fixed<<setprecision(2) << a.d1 << endl;
}
int main(){
    struct SinhVien A;
    nhap(A);
    in(A);
    return 0;
}
