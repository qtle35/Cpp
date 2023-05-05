#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int dem,n=s.size(),a[1000];
        for(int i=0;i<n;i++) a[i]=1;
        for(int i=0;i<n;i++){
        	dem=1;
        	if(a[i]){
        		for(int j=i+1;j<n;j++){
        			if(s[i]==s[j]){
        				dem++;
        				a[j]=0;
					}
				}
				cout<<s[i]<<dem;
			}
		}
		cout<<"\n";
    }
}
