#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,a[100000],b[100000]={0},kt=1;
        cin>>n;
        for(int i=0;i<n;i++){
        	cin>>a[i];
        	b[i]=1;
		}
        for(int i=0;i<n-1;i++){
        	if(b[i]){
        		for(int j=i+1;j<n;j++){
        			if(a[i]==a[j]){
        				cout<<a[i]<<endl;
        				kt=0;
        				break;
        			}
				}
			}
			if(!kt) break;
		}
		if(kt) cout<<"NO\n";
    }
}
