#include <bits/stdc++.h>
using namespace std;
string nhan(string a, string b){
	int len1=a.size(),len2=b.size();
	vector <int> res(len1+len2,0);
	int vt1=0,vt2=0;
	for(int i=len1-1;i>=0;i--){
		int k=0;
		int n1=a[i]-'0';
		vt2=0;
		for(int j=len2-1;j>=0;j--){
			int n2=b[j]-'0';
			int sum=n1*n2+res[vt1+vt2]+k;
			k=sum/10;
			res[vt1+vt2]=sum%10;
			vt2++;
		}
		if(k>0) res[vt1+vt2]+=k;
		vt1++;
	}
	int i=res.size()-1;
	while(i>=0&&res[i]==0) i--;
	string s="";
	while(i>=0) s+=to_string(res[i--]);
	return s;
}
main(){
	int t;cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		cout<<nhan(a,b);
	}
}
