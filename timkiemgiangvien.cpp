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
			for(int i=0;i<a.hoten.size();i++) h[i]=tolower(h[i]);
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
bool check(string s1,string s2){
	for(int i=0;i<s1.size();i++){
		for(int j=0;j<s2.size();j++){
			if(s1[i]==s1[j]) return 1;
		}
	}
	return 0;
}
int main(){
    GiangVien ds[1005];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
    	string s1,s2="";
		cin>>s1;
		s2=s1;
		for(int j=0;j<s1.size();j++) s1[j]=tolower(s1[j]);
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s2<<":"<<endl;
		for(int j=0;j<N;j++){
			if(ds[j].ten.find(s1)!= string::npos) cout<<ds[j];
		}
	}
    return 0;
}

