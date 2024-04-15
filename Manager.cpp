#pragma once
#include "Person.h"
#include "Header.h"


static void Show_Staff( Staff Staff ) {
	cout << "Ten nhan vien: " << Staff.getName() << endl;
	cout << "Gioi tinh: " << Staff.getGender() << endl;
	cout << "Dia chi: " << Staff.getAddress() << endl;
	cout << "Bo phan: " << Staff.getSection() << endl;
	cout << "Trinh do van hoa: " << Staff.getSection() << endl;
	cout << "Username: " << Staff.getUserName() << endl;
	cout << "Credit ID: " << Staff.get_creditID() << endl;
}

static void Add_Staff(){
	string temp;
	double coef;

	Staff staff;
	cout << "Nhap ten real: ";
	cin >> temp;
	staff.setName(temp);

	cout << "Nhap gioi tinh: ";
	cin >> temp;
	staff.setGender(temp);

	cout << "Nhap dia chi: ";
	cin >> temp;
	staff.setAddress(temp);

	cout << "Nhap bo phan: ";
	cin >> temp;
	staff.setSection(temp);

	cout << "Nhap trinh do van hoa: ";
	cin >> temp;
	staff.setAcademicStandard(temp);

	cout << "Nhap bac luong: ";
	cin >> coef;
	staff.setCoefficientsSalary(coef);

	cout << "Nhap ID Creditcard: ";
	int Credit_ID;
	cin >> Credit_ID;
	staff.set_creditID(Credit_ID);

	cout << "Nhap username: ";
	cin >> temp;
	staff.setUserName(temp);

	cout << "Password : ";
	cin >> temp;

	cout << "Enter the password:";
	string sub_password;
	cin >> sub_password;

	if (sub_password != temp) {
		cout << "Invalid password";
	}
	else {
		staff.setPassWord(temp);
	}
	cout << "Success";

	Show_Staff(staff);
}

static void Control_Menu() {
	cout << endl;
	cout << "1. Them nhan vien " << endl;
	cout << "2. Xoa nhan vien" << endl;
	cout << "3. Xem danh sach nhan vien" << endl;

	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1 :
		Add_Staff();
	default:
		break;
	}
}