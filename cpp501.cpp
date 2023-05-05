#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef struct Point{
	double x,y;
};
void input(Point &a){
	cin>>a.x>>a.y;
}
double distance(Point a, Point b){
	double k;
	k=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	return k;
}
int main(){
    struct Point A,B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
