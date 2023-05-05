#include<bits/stdc++.h>
using namespace std;
void sum(string a, string b){
	string c="";int check=0;
	while(a.size()<b.size()) a="0"+a;
	while(b.size()<a.size()) b="0"+b;
	for(int i=a.size()-1;i>=0;i--){
		int k=(a[i]-48)+(b[i]-48)+check;
		check=k/10;k=k%10;
		c=(char)(k+48)+c;
	}
	if(check>0) c="1"+c;
	cout<<c<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		sum(a,b);
	}
}
