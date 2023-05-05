#include<bits/stdc++.h>
using namespace std;
void Subtraction(string a,string b){
	string c="";int check=0;
	while(a.size()<b.size()) a="0"+a;
	while(b.size()<a.size()) b="0"+b;
	if(a<b) swap(a,b);
	for(int i=a.size()-1;i>=0;i--){
		int k=(a[i]-48)-(b[i]-48)-check;
		if(k<0){
			c=(char)(k+10+'0')+c;
			check=1;
		}
		else{
			c=(char)(k+'0')+c;
			check=0;
		}
	}
	cout<<c<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		Subtraction(a,b);
	}
}
