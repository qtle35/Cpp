#include<bits/stdc++.h> 
using namespace std;
struct Sv{
	string ma,ten,check;
	double d1,d2,d3,td; 
};
int main(){
	double t;
	Sv s;
	string s1[3]={"KV1","KV2","KV3"},s2;
	double a[3]={0.5,1.0,2.5};
	cin>>s.ma;
	scanf("\n");
	getline(cin,s.ten);
	cin>>s.d1;cin>>s.d2;cin>>s.d3;
	s.td=s.d1*2+s.d2+s.d3;
	for(int i=0;i<3;i++) s2+=s.ma[i];
	for(int i=0;i<3;i++){
		if(s2==s1[i]){
			t=a[i];
		}
	}
	//cout<<s.td+t<<endl;
	if(s.td+t>=24) s.check="TRUNG TUYEN";
	else s.check="TRUOT";
	cout<<s.ma<<" "<<s.ten<<" "<<t<<" "<<s.td<<" "<<s.check;
}
