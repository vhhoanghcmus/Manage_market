#include "Product.h"
#include "Header.h"


static void Show_food(Food new_food) {
	cout << "Ten san pham: " << new_food.getName() << endl;
	cout << "Gia: " << new_food.getPrice() << endl;
	cout << "So luong: " << new_food.getQuantity()<< endl;
	cout << "Nhan hang: " << new_food.getBrand() << endl;
	cout << "Ngay san xuat: " << new_food.getNMFday() << endl;
	cout << "Han su dung: " << new_food.getExpDay() << endl;
}

static void Add_Food() {
	string temp;
	int quan;
	double Price;

	Food new_food;
	cout << "Nhap ten real: ";
	cin >> temp;
	new_food.setName(temp);

	cout << "Nhap gia: ";
	cin >> Price;
	new_food.setPrice(Price);

	cout << "Nhap so luong: ";
	cin >> quan;
	new_food.setQuantity(quan);

	cout << "Nhap hang: ";
	cin >> temp;
	new_food.setBrand(temp);

	cout << "Nhap ngay san xuat: ";
	cin >> temp;
	new_food.setMNFday(temp);

	cout << "Nhap han su dung: ";
	cin >> temp;
	new_food.setExpDay(temp);

	Show_food(new_food);
}

static void Show_Clothes(Clothes new_clothes) {
	cout << "Ten san pham: " << new_clothes.getName() << endl;
	cout << "Gia: " << new_clothes.getPrice() << endl;
	cout << "So luong: " << new_clothes.getQuantity() << endl;
	cout << "Nhan hang: " << new_clothes.getBrand() << endl;
	cout << "Size: " << new_clothes.getSize() << endl;
}

static void Add_Clothes() {
	string temp;
	int quan;
	double Price;

	Clothes new_clothes;
	cout << "Nhap ten real: ";
	cin >> temp;
	new_clothes.setName(temp);

	cout << "Nhap gia: ";
	cin >> Price;
	new_clothes.setPrice(Price);

	cout << "Nhap so luong: ";
	cin >> quan;
	new_clothes.setQuantity(quan);

	cout << "Nhap hang: ";
	cin >> temp;
	new_clothes.setBrand(temp);

	cout << "Nhap size: ";
	cin >> temp;
	new_clothes.setSize(temp);

	Show_Clothes(new_clothes);
}


static void x () {
	cout << "1. Them san pham: " << endl;
	cout << "2. Xoa san pham: " << endl;

	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "1. Food: " << endl;
		cout << "2. Clothes: " << endl;
		int subchoice;
		cin >> subchoice;
		switch (subchoice)
		{
		case 1:
			{
				Add_Food();
				break;
			}
		case 2:
		{
			Add_Clothes();
			break;
		}
		default:
			break;
		}
	}
	default:
		break;
	}
}