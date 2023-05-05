#include <bits/stdc++.h>
using namespace std;
main(){
    string s;
    stack <char> st;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    for(int i=0;i<s.size();i++){
        cout<<st.top();
        st.pop();
    }
}