#include <bits/stdc++.h>
using namespace std;
void printMatrixDiagonal(int mat[110][110], int n,int m){
    int i = 0, j = 0;
    bool isUp = true;
    for (int k = 0; k < n * m;) {
        if (isUp) {
            for (; i >= 0 && j < m; j++, i--) {
                cout << mat[i][j] << " ";
                k++;
            }
            if (i < 0 && j <= m - 1)
                i = 0;
            if (j == m)
                i = i + 2, j--;
        }
        else {
            for (; j >= 0 && i < n; i++, j--) {
                cout << mat[i][j] << " ";
                k++;
            }
            if (j < 0 && i <= n - 1)
                j = 0;
            if (i == n)
                j = j + 2, i--;
        }
        isUp = !isUp;
    }
}
 
int main(){
	int t;cin>>t;
	while(t--){
		int mat[110][110],m,n;
    	cin>>n>>m;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++) cin>>mat[i][j];
		}
    	printMatrixDiagonal(mat, n,m);
    	cout<<endl;
	}
}
