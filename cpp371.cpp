#include <bits/stdc++.h>
#include <math.h>
using namespace std;
main(){
		string s;
		cin>>s;
		int a[1000];
		for(int i=0;i<s.size();i++){
			a[i]=1;
			if(s[i]>=65&&s[i]<=90) s[i]+=32;
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y') a[i]=0;
		}
		for(int i=0;i<s.size();i++){
			if(a[i]) cout<<"."<<s[i];
		}
}

