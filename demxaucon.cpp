#include <bits/stdc++.h>
using namespace std;
int demxau(string s, int k){
	int kq=0;
	for(int i=0;i<s.size();i++){
		int dem=0;
		int bcc[26]={0};
		for(int j=i;j<s.size();j++){
			if(bcc[s[j]-'a']==0){
				dem++;
			}
			bcc[s[j]-'a']++;
			if(dem==k) kq++;
			if(dem>k) break;
		}
	}
	return kq;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s;cin>>k;
		cout<<demxau(s,k)<<endl;
	}
}
