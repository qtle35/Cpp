#include <bits/stdc++.h>
using namespace std;
bool isloggedIn(){
    string username,password,un,pw;
    cout<<"Nhap ten: ";cin>>username;
    cout<<"Nhap mat khau: ";cin>>password;
    ifstream read("D:\\project\\login" + username + ".txt");
    getline(read,un);
    getline(read,pw);
    if(username==un&&password==pw) return 1;
    return 0;
}
main(){
    int choice;
    cout<<"1: Dang ky\n2: Dang nhap\nChon cai nao: ";cin>>choice;
    if(choice==1){
        string username,password;
        cout<<"nhap ten ";cin>>username;
        cout<<"nhap mat khau ";cin>>password;
        ofstream file;
        file.open("D:\\project\\login" + username + ".txt");
        file<<username<<endl<<password;
        file.close();
        main();

    }
    else if(choice==2){
        bool status=isloggedIn();
        if(!status){
            cout<<"sai tai khoan hoac mat khau"<<endl;
            main();
        }
        else{
            cout<<"dang nhap thanh cong"<<endl;
        }
    }
}