#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int tim(string s){
	int vt;
	for(int i=0;i<s.size();i++){
		if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4'){
			vt=i;
			break;
		}
	}
	return vt;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int vt=tim(s);
		for(int i=0;i<vt;i++) cout<<s[i];
		for(int i=vt+3;i<s.size();i++) cout<<s[i];
		cout<<"\n";
	}
}
