#include <bits/stdc++.h>
using namespace std;
bool check(string s, string s1){
	for(int i=0;i<s.size();i++){
		if(s[i]!=s1[i]) return 0;
	}
	return 1;
}
int main() {
    int n,dem=0,a[10000];
    cin >> n;
    cin.ignore();
    string s[10000];
    for(int i=0;i<n;i++){
    	getline(cin,s[i]);
    	a[i]=1;
	}
	for(int i=0;i<n;i++){
		if(a[i]){
			for(int j=i+1;j<n;j++){
				if(s[i].size()==s[j].size()){
					if(check(s[i],s[j])){
						dem++;
						a[j]=0;
					}
				}
			}
		}
	}
	cout<<n-dem<<"\n";
}
