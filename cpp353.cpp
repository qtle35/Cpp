#include <bits/stdc++.h>
#include <math.h>
using namespace std;
bool check(int a[], int n){
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-i-1]) return 0;
	}
	return 1;
}
int main(){
    int t;cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	int n=0,a[100000];
    	for(int i=0;i<s.size();i++){
    		if(s[i]>='a'&&s[i]<='z') s[i]-=32;
    		if(s[i]>='A'&&s[i]<='C') a[n++]=2;
    		else if(s[i]>='A'&&s[i]<='C') a[n++]=2;
    		else if(s[i]>='D'&&s[i]<='F') a[n++]=3;
    		else if(s[i]>='G'&&s[i]<='I') a[n++]=4;
    		else if(s[i]>='J'&&s[i]<='L') a[n++]=5;
    		else if(s[i]>='M'&&s[i]<='O') a[n++]=6;
    		else if(s[i]>='P'&&s[i]<='S') a[n++]=7;
    		else if(s[i]>='T'&&s[i]<='V') a[n++]=8;
    		else if(s[i]>='W'&&s[i]<='Z') a[n++]=9;
		}
		if(check(a,n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
