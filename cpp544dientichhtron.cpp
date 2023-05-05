#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct td{
	double x,y;
};
int main(){
	int t;cin>>t;
	while(t--){
		td a[3];
		for(int i=0;i<3;i++){
			cin>>a[i].x;cin>>a[i].y;
		}
		double m,n,k;
		m=sqrt(((a[0].x-a[1].x)*(a[0].x-a[1].x))+((a[0].y-a[1].y)*(a[0].y-a[1].y)));
		n=sqrt(((a[0].x-a[2].x)*(a[0].x-a[2].x))+((a[0].y-a[2].y)*(a[0].y-a[2].y)));
		k=sqrt(((a[1].x-a[2].x)*(a[1].x-a[2].x))+((a[1].y-a[2].y)*(a[1].y-a[2].y)));
		if(m+n<=k||m+k<=n||k+n<=m) cout<<"INVALID"<<endl;
		else{
			double s,r,res;
			s=sqrt((m+n+k)*(m+n-k)*(n+k-m)*(k+m-n))/4;
			r=(m*n*k)/(4*s);
			res=PI*r*r;
			cout<<setprecision(3)<<fixed<<res<<endl;
		}
	}
}
