#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string msv,ten,lop,mail;
		friend istream &operator>>(istream &is,SinhVien &a){
			is>>a.msv;
			scanf("\n");
			getline(is,a.ten);is>>a.lop;is>>a.mail;
			return is;
		}
		friend ostream &operator<<(ostream &os,const SinhVien &a){
			os<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.mail<<endl;
			return os;
		}
};
int main(){
    SinhVien ds[1005];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
    	string s,h[5]={"Ke toan","Cong nghe thong tin","An toan thong tin","Vien thong","Dien tu"},k[5]={"DCKT","DCCN","DCAT","DCVT","DCDT"},s1="";
    	scanf("\n");
		getline(cin,s);
		for(int j=0;j<s.size();j++) s1+=toupper(s[j]);
    	cout<<"DANH SACH SINH VIEN NGANH "<<s1<<":"<<endl;
    	for(int j=0;j<N;j++){
    		string m="";
    		for(int l=3;l<7;l++) m+=ds[j].msv[l];
    		for(int l=0;l<5;l++){
    			if(s==h[l]&&m==k[l]){
    				if((m=="DCCN"||m=="DCAT")){
    					if(ds[j].lop[0]!='E') cout<<ds[j];
					}
					else cout<<ds[j];
				}
			}
		}
	}
    return 0;
}
