#include <bits/stdc++.h>
using namespace std;
struct ThucTap{
	string msv,ten,lop,mail,cty;
	int stt;
};
void nhap(ThucTap ds[],int n){
	for(int i=1;i<=n;i++){
		scanf("\n");
		getline(cin,ds[i].msv);
		getline(cin,ds[i].ten);
		getline(cin,ds[i].lop);
		getline(cin,ds[i].mail);
		getline(cin,ds[i].cty);
		ds[i].stt=i;
	}
}
void in(ThucTap ds[],int n, string s){
	for(int i=1;i<=n;i++){
		if(ds[i].cty==s){
			cout<<ds[i].stt<<" "<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].mail<<" "<<ds[i].cty<<endl;
		}
	}
}
void sapxep(ThucTap ds[], int n){
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].msv>ds[j].msv) swap(ds[i],ds[j]);
		}
	}
}
int main(){
    struct ThucTap ds[50];
    int N,q;
    string a[10];
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    cin>>q;
    for(int i=0;i<q;i++){
    	cin>>a[i];
	}
	for(int i=0;i<q;i++){
    	in(ds,N,a[i]);
	}
    return 0;
}
