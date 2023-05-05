#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2,token=" ",s3[10000],s4[10000];
		int a[100000],h=0,k=0;
		getline(cin,s1);getline(cin,s2);
		stringstream ss(s1);
		while(ss>>token){
			a[h]=1;
			s3[h]=token;
			h++;
		}
		for(int i=0;i<h;i++){
			for(int j=i+1;j<h;j++){
				if(s3[i]>s3[j]){
					string doi=s3[i];
					s3[i]=s3[j];
					s3[j]=doi;
				}
			}
		}
		for(int i=0;i<h;i++){
			if(a[i]){
				for(int j=i+1;j<h;j++){
					if(s3[i]==s3[j]) a[j]=0;
				}
			}
		}
		stringstream mm(s2);
		while(mm>>token){
			s4[k++]=token;
		}
		for(int i=0;i<h;i++){
			if(a[i]){
				for(int j=0;j<k;j++){
					if(s3[i]==s4[j]){
						a[i]=0;
						break;
					}
				}
			}
		}
		for(int i=0;i<h;i++){
			if(a[i]) cout<<s3[i]<<" ";
		}
		cout<<"\n";
	}
}
