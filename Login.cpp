#pragma once
#include "Header.h"
#include "Manager.cpp"
#include <conio.h>

static void Login() {
    string User_name;
    string Password;
    cout << "\n  _______Login_______     \n";
    cout << "Username : ";
    cin >> User_name;
    cout << "Password  : ";
    char ch;
    ch = _getch();
    while (ch != 13) {//character 13 is enter
        Password.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if (User_name == "admin" && Password == "admin")
    {
        Control_Menu();
    }
    else
    {
        cout << "\nInvalid username or password \n";
        cout << "_________________________\n";
        cout << "\nPress any key to continue...";
    }

}
