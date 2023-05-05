#include <bits/stdc++.h>
#include <math.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		string s;
		int du=0,k=1;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[s.size()-i-1]=='1'){
				k=1;
				for(int j=0;j<i;j++) k=(k*2)%5;
				du+=k;
			}
		}
		if(du%5==0&&du!=0) cout<<"Yes\n";
		else cout<<"No\n";
	}
}
