#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,k,a[100],vt;
		cin>>n>>k;
		for(int i=1;i<=k;i++) a[i]=i;
		while(1){
			for(int i=1;i<=k;i++) cout<<a[i];
			cout<<" ";
			vt=k;
			while(vt>0&&a[vt]>=n-k+vt) vt--;
			if(vt==0) break;
			a[vt]++;
			for(int j=vt+1;j<=k;j++) a[j]=a[vt]+j-vt;
		}
		cout<<endl;
	}
}
