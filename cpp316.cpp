#include<bits/stdc++.h>
using namespace std;
string sum(string a, string b){
	string c="";int check=0;
	while(a.size()<b.size()) a="0"+a;
	while(b.size()<a.size()) b="0"+b;
	for(int i=a.size()-1;i>=0;i--){
		int k=(a[i]-48)+(b[i]-48)+check;
		check=k/10;k=k%10;
		c=(char)(k+48)+c;
	}
	if(check>0) c="1"+c;
	return c;
}
void solu(string s){
	int n=s.size();
	string c="";
	while(n>1){
		c="";
		for(int i=0;i<n;i++){
			string t(1,s[i]);
			c=sum(c,t);
		}
		s=c;
		n=c.size();
	}
	if(c=="9") cout<<"1\n";
	else cout<<"0\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		solu(s);
	}
}
