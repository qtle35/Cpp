#include <bits/stdc++.h>
using namespace std;
main(){
	string s1,s2;
	getline(cin,s1);getline(cin,s2);
	int k=s2.size();
	while(1){
		int pos=s1.find(s2);
		if(pos==-1) break;
		s1.erase(pos,k);
	}
	cout<<s1;
}
