#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100],sum=0,m;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<4;i++){
    	prev_permutation(a,a+n);
    	for(int i=0;i<n;i++) cout<<a[i];
    	cout<<endl;
	}
}
