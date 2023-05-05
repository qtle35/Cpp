#include <bits/stdc++.h> 
#define MAX 105  
using namespace std;  
int m, n, A[MAX][MAX];
int row[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int col[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
bool chuaxet[MAX][MAX];
void Init(void){
	cin>>m>>n;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++) {
			cin>>A[i][j];
			chuaxet[i][j]= true;
		}			
	}
}
int Test( int x, int y) { 
	if(x>=0 && x<m && y>=0 && y<n && A[x][y] && chuaxet[x][y]) 
		return true;
	return false;
}   
void DFS( int x, int y) { 
    chuaxet[x][y] = false;  
    for (int k = 0; k < 8; ++k) 
        if (Test(x + row[k], y + col[k])) 
            DFS( x + row[k], y + col[k]); 
} 
int Solution(void) { 
    int count = 0;
    for (int x = 0; x < m; ++x) {	
        for (int y = 0; y < n; ++y){		
            if (A[x][y] && chuaxet[x][y]) { 
                DFS( x, y);                   
                ++count;
            } 
  		}
  	}
    return count; 
}   
int main() { 
	int T; cin>>T;
	while(T--){
		Init();
		cout<<Solution()<<endl;
	}
}
