#include  <bits/stdc++.h>
using namespace std;
bool check=1;
string s;
int n;
void tiep(){
	int i=n-1;
	while(i>=0&&s[i]!='0'){
		s[i]='0';i--;
	}
	if(i>=0) s[i]='1';
	else check=0;
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) s[i]='0';
		while(check){
			for(int i=0;i<n;i++){
				cout<<s[i];
			}
			cout<<" ";
			tiep();
		}
		check=1;
		cout<<"\n";
	}
}
