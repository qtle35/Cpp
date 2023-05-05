#include<bits/stdc++.h>
using namespace std;
void solu(string s){
	int n=s.size(),b[100000],ma=1,dem;
	for(int i=0;i<n;i++) b[i]=1;
	for(int i=0;i<n;i++){
		if(b[i]){
			dem=1;
			for(int j=i+1;j<n;j++){
				if(s[i]==s[j]){
					dem++;
					b[j]=0;
				}
			}
			if(dem>ma) ma=dem;
		}
	}
	if(n-ma>=ma-1) cout<<"1\n";
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
