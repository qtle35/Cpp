#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,a[100000],b[100000],c[100000],m=1,dem=0,k=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(n%2==0){
			for(int i=n/2;i<n;i++){
				 b[m]=a[i];
				 m+=2;
			}
			for(int i=0;i<n/2;i++){
				c[k]=a[i];
				k+=2;
			}
		}
		else {
			for(int i=n/2+1;i<n;i++){
				b[m]=a[i];
				m+=2;
			}
			for(int i=0;i<=n/2;i++){
				c[k]=a[i];
				k+=2;
			}
		}
		for(int i=0;i<n;i++){
			if(i%2==0){
				cout<<c[i]<<" ";
				dem++;
			}
			else{
				cout<<b[i]<<" ";
				dem++;
			}
			
		}
		cout<<"\n";
	}
}

