#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,dem=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<a.size()-1;i++){
		if((a[i]+a[i+1])%2==0){
			a.erase(a.begin()+i,a.begin()+i+2);
			cout<<endl;
			i=0;
		}
	}
	cout<<a.size();
}
