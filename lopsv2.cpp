#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,ten,lop,ns;
		double gpa;
	public:
		friend istream &operator>>(istream &is, SinhVien &a){
			getline(is,a.ten);
	        is >> a.lop>>a.ns>>a.gpa;
	        return is;
	    }
	    friend ostream &operator<<(ostream &os,SinhVien &a){
	    	if(a.ns[1]=='/') a.ns="0"+a.ns;
			if(a.ns[4]=='/') a.ns.insert(3,"0");
	        os <<"B20DCCN001 "<< " " << a.ten<<" "<<a.lop<<" "<<a.ns<<" ";
	        os<<setprecision(2)<<fixed<<a.gpa;
	        return os;
	    }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
