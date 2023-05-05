#include <bits/stdc++.h> 
#define MAX 110
using namespace std; 
void Result(int m, int n, int mat[MAX][MAX]) {   
    for (int i=0; i<m; i++) { 
        for (int j=0; j<n; j++)
          cout << mat[i][j] << " "; 
        //cout << endl; 
    } 
    cout<<endl;

}
void Solution(int m, int n, int mat[MAX][MAX]) { 
    int row = 0, col = 0;
    int prev, curr;
    while (row < m && col < n) {
        if (row + 1 == m || col + 1 == n)
            break;		
        prev = mat[row + 1][col];
        for (int i = col; i < n; i++) { 
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        } 
        row++;
        for (int i = row; i < m; i++) { 
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr; 
        } 
        n--;
        if (row < m) { 
            for (int i = n-1; i >= col; i--) { 
                curr = mat[m-1][i]; 
                mat[m-1][i] = prev; 
                prev = curr; 
            } 
        } 
        m--; 
        if (col < n) {
            for (int i = m-1; i >= row; i--)  { 
                curr = mat[i][col]; 
                mat[i][col] = prev;
                prev = curr;
            } 
        } 
        col++;
    }       
} 
 
int main() { 
	int m, n, T; int A[MAX][MAX]; cin>>T;
	while(T--){
		cin>>m>>n; 
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++) 
				cin>>A[i][j];
		}
		Solution(m, n, A); Result(m, n, A);
	}
} 

