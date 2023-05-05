#include<bits/stdc++.h>
using namespace std;
bool kt(string s){
	int n=s.size();
	for(int i=0;i<=n/2;i++){
		if(s[i]!=s[n-i-1]) return 0;
	}
	return 1;
}
bool comp(string a,string b){
	int n=a.size(),m=b.size();
	if(n>m) return 1;
	else if(n==m){
		if(a>b) return 1;
	}
	return 0;
}
int main(){
	string s,h[1000];
	int n=0,b[1000];
	while(cin>>s){
		if(kt(s)&&s.size()>1){
			h[n]=s;
			b[n]=1;
			n++;
		}
	}
	sort(h,h+n,comp);
	for(int i=0;i<n;i++){
		if(b[i]){
			int dem=1;
			for(int j=i+1;j<n;j++){
				if(h[i]==h[j]){
					dem++;
					b[j]=0;
				}
			}
			cout<<h[i]<<" "<<dem<<endl;
		}
	}
}
