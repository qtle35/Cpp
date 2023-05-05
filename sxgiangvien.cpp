#include <bits/stdc++.h>
using namespace std;
int k=1;
class GiangVien{
	public:
		string hoten,ten,ma,mon,tat;
		friend istream &operator>>(istream &is,GiangVien &a){
			scanf("\n");
			getline(is,a.hoten);getline(is,a.mon);
			string token1,s1,token2,h;
			a.ma="GV";
			if(k<10) a.ma+="0";
			a.ma+=to_string(k);k++;
			h=a.hoten;
			stringstream ss(h);
			while(ss>>h){
				s1=token1;
			}
			a.ten=h;
			a.tat="";
			stringstream mm(a.mon);
			while(mm>>a.mon){
				a.tat+=toupper(a.mon[0]);
			}
			return is;
		}
		friend ostream &operator<<(ostream &os,const GiangVien &a){
			os<<a.ma<<" "<<a.hoten<<" "<<a.tat<<endl;
			return os;
		}
};
void sapxep(GiangVien ds[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].ten>ds[j].ten) swap(ds[i],ds[j]);
			else if(ds[i].ten==ds[j].ten){
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

