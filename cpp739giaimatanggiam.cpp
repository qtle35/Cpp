#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		string s;
		int gtt=1,vt=0;
		cin>>s;
		vector<int> a;
		if(s[0]=='I'){
			a.push_back(1);a.push_back(2);
			gtt=3;vt=1;
		}
		else{
			a.push_back(2);a.push_back(1);
			gtt=3;vt=0;
		}
		for(int i=1;i<s.size();i++){
			if(s[i]=='I'){
				a.push_back(gtt);
				gtt++;
				vt=i+1;
			}
			else{
				a.push_back(a[i]);
				for(int j=vt;j<=i;j++) a[j]++;
				gtt++;
			}
		}
		for(int i=0;i<a.size();i++) cout<<a[i];
		cout<<endl;
	}
}
