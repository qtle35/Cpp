#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n,a[100000],l=0,r=0,kt=1;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			a[i]*=a[i];
		}
		sort(a,a+n);
		for(int i=n-1;i>=2;i--){
			l=0;r=i-1;
			while(l<r){
				if(a[l]+a[r]==a[i]){
					cout<<"YES\n";
					kt=0;
					break;
				}
				(a[l]+a[r]<a[i])?l++:r--;
			}
		}
		if(kt) cout<<"NO\n";
	}
}
