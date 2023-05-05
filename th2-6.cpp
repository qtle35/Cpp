#include <bits/stdc++.h>
using namespace std;

void xuli() {
    string s; int sum = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(i%2 == 0) sum = sum + s[i] - '0';
        else sum = sum - s[i] + '0';
    }
    if(sum%11 == 0) cout << "1\n";
    else cout << "0\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        xuli();
    }
    return 0;
}
