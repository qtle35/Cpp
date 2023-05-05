#include<bits/stdc++.h> 
using namespace std; 
int main() { 
	string s1[3]={"HT","HP","GV"};
	int a1[3]={2000000,900000,500000};
	string ma,ten,s="";
	int cb,luong,m;
	cin>>ma;
	scanf("\n");getline(cin,ten);cin>>cb;
	s=s+ma[0]+ma[1];
	int k=0;
	for(int i=2;i<4;i++) k=k*10+(ma[i]-'0');
	luong=k*cb;
	for(int i=0;i<3;i++){
		if(s==s1[i]){
			luong+=a1[i];
			m=a1[i];
		} 
	}
	cout<<ma<<" "<<ten<<" "<<k<<" "<<m<<" "<<luong;
}
