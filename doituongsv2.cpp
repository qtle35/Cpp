#include <bits/stdc++.h>
using namespace std;
int k=1;
class SinhVien{
	public:
		string msv,ten,lop,ns;
		double gpa;
		friend istream &operator>>(istream &is,SinhVien &a){
			scanf("\n");
			getline(is,a.ten);is>>a.lop;is>>a.ns;is>>a.gpa;
			for(int i=0;i<a.ten.size();i++) a.ten[i]=tolower(a.ten[i]);
			stringstream ss(a.ten);
			int m=0;string s[100],token;
			while(ss>>token){
				token[0]=toupper(token[0]);
				s[m++]=token;
			}
			a.ten="";
			for(int i=0;i<m;i++) a.ten+=s[i]+" ";
			a.msv="B20DCCN0";
			if(k<10) a.msv+="0";
			a.msv+=to_string(k);
			k++;
			if(a.ns[1]=='/') a.ns="0"+a.ns;
			if(a.ns[4]=='/') a.ns.insert(3,"0");
			return is;
		}
		friend ostream &operator<<(ostream &os,const SinhVien &a){
			os<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<setprecision(2)<<fixed<<a.gpa<<endl;
			return os;
		}
};
void sapxep(SinhVien ds[],int n){
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(ds[i].gpa<ds[j].gpa) swap(ds[i],ds[j]);
			}
		}
	}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
