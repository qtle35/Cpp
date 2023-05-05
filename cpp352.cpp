#include <bits/stdc++.h>
using namespace std;
main(){
	int t,h=0;cin>>t;
	string s2[100];
	cin.ignore();
	while(t--){
		string s,s1[105],token=" ";
		int m=0,dem=1;
		s2[h]="";
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			if(s[i]>=65&&s[i]<=90) s[i]+=32;
		}
		stringstream ss(s);
		while(ss>>token){
			s1[m++]=token;
		}
		s2[h]+=s1[m-1];
		for(int i=0;i<m-1;i++) s2[h]+=s1[i][0];
		for(int i=0;i<h;i++){
			if(s2[i]==s2[h]){
				dem++;
			}
		}
		if(dem!=1) cout<<s2[h]<<dem<<"@ptit.edu.vn"<<endl;
		else cout<<s2[h]<<"@ptit.edu.vn"<<endl;
		h++;
	}

}

