#include <iostream>

#include "Login.cpp"
#include "SignUp.cpp"
using namespace std;


static void Homepage() {
    static int choice;
    int count = 0;
    cout << count++;

    system("cls");
    cout << "  ........................................................................\n";
    cout << " >>>                 Supermarket management system                      <<< \n";
    cout << "  ........................................................................";
    cout << endl;
    cout << "\n\t\t______Please select your option______\n";
    cout << endl;
    cout << "                      1. Log in                            \n";
    cout << "                      2. Sign up                           \n";
    cout << "                      3. Exit                              \n";

    cout << endl;
    cout << "  enter your choice <1-3>  : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        Login();
        break;
    }

    case 2:
    {
        Signup();
        break;
    }
    case 3:
    {
        exit(0);
        break;
    }
    default:
    {
        cout << "please select from the given options \n";
        cout << "_________________________\n";
        cout << "\npress any key to continue...";

    }
    }
}