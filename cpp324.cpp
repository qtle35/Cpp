#include<bits/stdc++.h>
using namespace std;
long long sqr(long long x){
	return x*x;
}
long long du(int a, int b,int m){
	if(b==0) return 1;
	else{
		if(b%2==0) return sqr(du(a,b/2,m))%m;
		else return a*(sqr(du(a,b/2,m))%m)%m;
	}
}
void xl(string a,long long b,long long m){
	int k=0,h=1;
	for(int i=0;i<a.size();i++){
		k=(k*10+a[i]-'0')%m;
	}
	cout<<du(k,b,m)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		long long b,m;
		cin>>a>>b>>m;
		xl(a,b,m);
	}
}
