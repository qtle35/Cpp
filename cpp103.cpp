#include <bits/stdc++.h>
using namespace std;
long long gt(int n){
	long long m=1;
	for(int i=2;i<=n;i++){
		m*=i;
	}
	return m;
}
int main() {
	int n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum+=gt(i);
	}
	cout<<sum;
}
