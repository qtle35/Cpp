#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int tmp, cnt = 0, cnto = 0, cnte = 0;
        char c;
        do {
            cin >> tmp;
            cnt++;
            if (tmp % 2 == 0) cnte++;
            else cnto++;
            c = getchar();
        } while (c != '\n');
        if ((cnt % 2 == 0 && cnte > cnto) || (cnt % 2 == 1 && cnte < cnto)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
