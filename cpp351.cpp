#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    	string s,token,s1[100];
    	int n,h=0;
    	cin>>n;
    	cin.ignore();
    	getline(cin,s);
    	stringstream ss(s);
    	while(ss>>token){
    		if(token[0]>='a'&&token[0]<='z') token[0]-=32;
    		for(int i=1;i<token.size();i++){
    			if(token[i]>='A'&&token[i]<='Z') token[i]+=32;
			}
			s1[h++]=token;
		}
		if(n==1){
			cout<<s1[h-1]<<" ";
			for(int i=0;i<h-1;i++) cout<<s1[i]<<" ";
		}
		else{
			for(int i=1;i<h;i++) cout<<s1[i]<<" ";
			cout<<s1[0];
		}
		cout<<"\n";
	}
}
