#include <bits/stdc++.h>
using namespace std;
void doics(string s){
	int vt1=-1,vt2=-1;
	for(int i=s.size()-2;i>=0;i--){
		if(s[i]>s[i+1]){
			vt1=i;
			break;
		}
	}
	for(int i=s.size()-1;i>vt1;i--){
		if(s[vt1]>s[i]){
			if(vt2==-1) vt2=i;
			else if(s[i]>=s[vt2]) vt2=i;
		}
	}
	if(vt2!=-1){
		swap(s[vt1],s[vt2]);
		cout<<s;
	}
	else cout<<"-1";
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		doics(s);
		cout<<endl;
	}
}
