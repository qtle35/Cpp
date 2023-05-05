#include <bits/stdc++.h>
using namespace std;

void Solution() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    long long cnt = 0;
    for(int i = n-1; i > 0; i--) {
        long long vt = lower_bound(a.begin(), a.begin()+i, k - a[i]) - a.begin();
        if(vt < i) cnt += (i - vt);
    }
    cout << cnt << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        Solution();
    }
    return 0;
}
