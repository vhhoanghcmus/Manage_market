#pragma once

#include "Person.h"
#include "Header.h"

static void Show_New_Customer(Customer New_customer) {
	cout << "Ten nhan vien: " << New_customer.getName() << endl;
	cout << "Gioi tinh: " << New_customer.getGender() << endl;
	cout << "Dia chi: " << New_customer.getAddress() << endl;
    cout << "Username: " << New_customer.getUserName() << endl;
    cout << "Credit ID: " << New_customer.get_creditID() << endl;

}


static void Signup() {

    cout << "\n  _______SIGNUP_______     \n";

	string temp;
    int Credit_ID;

    Customer New_customer;
  

	cout << "Nhap ten: ";
	cin >> temp;
	New_customer.setName(temp);

	cout << "Nhap gioi tinh: ";
	cin >> temp;
	New_customer.setGender(temp);

	cout << "Nhap dia chi: ";
	cin >> temp;
	New_customer.setAddress(temp);

    cout << "Nhap ID Creditcard: ";
    cin >> Credit_ID;
    New_customer.set_creditID(Credit_ID);

    cout << "Nhap username: ";
    cin >> temp;
    New_customer.setUserName(temp);

    cout << "Password : ";
    cin >> temp;

    cout << "Enter the password:";
    string sub_password;
    cin >> sub_password;

    if (sub_password != temp) {
        cout << "Invalid password";
    }
    else {
        New_customer.setPassWord(temp);
    }
    cout << "Success";

    Show_New_Customer(New_customer);
}