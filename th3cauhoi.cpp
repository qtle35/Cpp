#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	string s[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("\n");
		getline(cin,s[i]);
	}
	string s1[1000];
	int a[1000]={0},h=0;
	s1[0]=s[0];
	for(int i=1;i<n;i++){
		if(s[i]==""){
			h++;
			s1[h]=s1[i+1];
			i++;
		}
		else{
			a[h]++;
		}
	}
	for(int i=0;i<h;i++){
		cout<<s1[i]<<": "<<a[i];
	}
	
}
