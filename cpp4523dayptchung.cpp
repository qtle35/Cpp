#include <bits/stdc++.h>
using namespace std;
void nhap(long long a[], long long n){
	for(int i=0;i<n;i++) cin>>a[i];
}
main(){
	int t;cin>>t;
	while(t--){
		long long n1,n2,n3,m=0,kt=0;
		cin>>n1>>n2>>n3;
		long long a[n1],b[n2],c[n3],d[10000];
		nhap(a,n1);nhap(b,n2);nhap(c,n3);
		int i=0,j=0,k=0;
		while(i<n1&&j<n2&&k<n3){
			if(a[i]==b[j]&&b[j]==c[k]){
				kt=1;d[m++]=a[i];i++;j++;k++;
			}
			else if(a[i]<b[j]) i++;
			else if(b[j]<c[k]) j++;
			else k++;
		}
		if(kt) for(int i=0;i<m;i++) cout<<d[i]<<" ";
		else cout<<"-1";
		cout<<endl;
	}
}
