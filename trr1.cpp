#include <bits/stdc++.h>
using namespace std;
int n, pa[100], vs[100];
long c[100][100],mt;
long Fopt = 1000000000;
long cmin = 1000000000;
int Xopt[100];
long Check(int pa[], int n){
	long s = 0; int i;
	for (i = 1; i < n; i++)
		s = s + c[pa[i]][pa[i+1]];
	s+= c[pa[n]][1];
	return (s);
}
void HvDq(int k, long d){
	if ( k> n) {long tmp= Check(pa, n);
	if (Fopt> tmp) { mt= tmp;
	for (int i = 1; i <= n; i++)
		Xopt[i]= pa[i]; 
	return;
	}
}
for (int i = 2; i <= n; i++)
	if (vs[i] == 0){
	pa[k] = i; vs[i] = 1;
	d = d + c[pa[k-1]][pa[k]];
	long g = d + cmin*(n-k+1);
	if (g < mt) HvDq(k+1, d);
	vs[i] = 0;
	d = d - c[pa[k-1]][pa[k]];
	}
}
void NhanhCan(){ 
	int i, j;
	for (i=1; i<= n; i++)
		for(j= 1; j <=n ; j++)
			if (i != j && cmin > c[i][j])
				cmin = c[i][j];
	long d = 0;
	pa[1] = 1; vs[1] = 1;
	HvDq(2, d);
}

