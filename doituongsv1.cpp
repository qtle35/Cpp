#include <bits/stdc++.h>
using namespace std;
int k=1;
class SinhVien{
	public:
		string msv,ten,lop,ns;
		double gpa;
		friend istream &operator>>(istream &is,SinhVien &a){
			is.ignore();
			getline(is,a.ten);is>>a.lop;is>>a.ns;is>>a.gpa;
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
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
