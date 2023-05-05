#include <bits/stdc++.h>
using namespace std;
int k=1;
class GiangVien{
	public:
		string ten,ma;
		int so;
		friend istream &operator>>(istream &is,GiangVien &a){
			cin>>a.ma;
			scanf("\n");
			getline(is,a.ten);cin>>a.so;
			return is;
		}
		friend ostream &operator<<(ostream &os,const GiangVien &a){
			os<<a.ma<<" "<<a.ten<<" "<<a.so<<endl;
			return os;
		}
};
void sapxep(GiangVien ds[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].so<ds[j].so) swap(ds[i],ds[j]);
			else if(ds[i].so==ds[j].so){
				if(ds[i].ma>ds[j].ma) swap(ds[i],ds[j]);
			}
		}
	}
}
int main(){
    GiangVien ds[1005];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds,N);
    for(i=0;i<N;i++){
        cout<< ds[i];
    }
    return 0;
}

