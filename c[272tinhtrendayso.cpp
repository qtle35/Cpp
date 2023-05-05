#include <bits/stdc++.h> 
typedef long long int ll;
const long long int MAX = 1000000007;
using namespace std;   
ll GCD(ll a, ll b)  {
	while(b!=0){
		ll r = a%b; a=b; b=r;
	}
	return a;
}
ll GCDA(ll A[], ll n){
	ll ans = A[0];
	for(ll i=1; i<n; i++){
		ans = GCD(ans,A[i]);
	}
	return(ans);
}
ll Tich(ll A[], ll n){
	ll tich=1;
	for(ll i=0; i<n; i++){
		tich = ((tich%MAX)*(A[i]%MAX))%MAX;
	}		
	return tich;
}
ll Luythua(ll A[],  ll n){
	ll ans = Tich(A,n);
	ll k = GCDA(A, n);
	for(ll i=1; i<k; i++){
		ans = (ans*ans)%MAX;
	}
	return ans;
}
int main(){ 
	ll A[100], T, N,kt=1;cin>>T;
	while(T--){
		cin>>N;
		for(ll i=0; i<N; i++){
			cin>>A[i];
			if(A[i]==0) kt=0;
		}
		if(kt){
			cout<<Luythua(A, N)<<endl;
		}
		else cout<<"1\n";
	}
}
