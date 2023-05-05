#include <bits/stdc++.h>
using namespace std;
bool compair(string a, string b){
	if(a+b>b+a) return 1;
	return 0;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s[100000];
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>s[i];
        sort(s,s+n,compair);
        for(int i=0;i<n;i++) cout<<s[i];
        cout<<endl;
    }
}
