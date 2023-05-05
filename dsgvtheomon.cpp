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
int main(){
    GiangVien ds[1005];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
    	string s1,s2="",token;
    	scanf("\n");
    	getline(cin,s1);
    	stringstream ss(s1);
    	while(ss>>s1) s2+=toupper(s1[0]);
		cout<<"DANH SACH GIANG VIEN BO MON "<<s2<<":"<<endl;
		for(int j=0;j<N;j++){
			if(s2==ds[j].tat) cout<<ds[j];
		}
	}
    return 0;
}

