#include <bits/stdc++.h>
void chuthuong(char s[]){
    for(int i=0; i<strlen(s); i++)
        s[i] = tolower(s[i]);
}
using namespace std;
int main(){
    char s[1000]; string name[1000];
    int count = 0;
    cin.getline(s,101);
    chuthuong(s);
    char *p = strtok(s, " \n");
    while(p != NULL){
        name[count] = p;
        count++;
        p = strtok(NULL, " \n");
    }
    count--;
    for(int i=0; i<count; i++) cout << name[i][0];
    cout << name[count];
    cout << "@ptit.edu.vn";
    return 0;
}
