#pragma once
#include <string>
using namespace std;


class Account {

    string User_name;
    string password;

 /*   Account(string user_name = "", string password = "") {
        this->User_name = User_name;
        this->password = password;
    }*/
public:

    void setUserName(string User_name) {
        this->User_name = User_name;
    }
    string getUserName() {
        return this->User_name;
    }

    void setPassWord(string password) {
        this->password = password;
    }
    string getPassword() {
        return this->password;
    }

};