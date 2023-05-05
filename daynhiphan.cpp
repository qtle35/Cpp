#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,a1[10000],a2[10000],max=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a1[i];
		}
		for(int i=0;i<n;i++){
			cin>>a2[i];
		}
		for(int i=0;i<n;i++){
			int x=0,y=0;
			for(int j=i;j<n;j++){
				x+=a1[j];y+=a2[j];
				if(x==y&&j-i+1>max) max=j-i+1;
			}
		}
		cout<<max<<endl;
	}
}
