#pragma once

#include<string>
using namespace std;

class Product {
    string NameOfProduct;
    double Price;
    int Quantity;
    string Brand;
public:
 /*   Product(string NameOfProduct = "", double Price = 0, int Quantity = 0, string Brand = "") {
        this->NameOfProduct = NameOfProduct;
        this->Quantity = Quantity;
        this->Brand = Brand;
        this->Price = Price;
    }*/

    void setName(string Name) {
        this->NameOfProduct = Name;
    }
    string getName() {
        return this->NameOfProduct;
    }

    void setPrice(double Price) {
        this->Price = Price;
    }
    double getPrice() {
        return this->Price;
    }

    void setQuantity(int Quantity) {
        this->Quantity = Quantity;
    }
    int getQuantity() {
        return this->Quantity;
    }

    void setID(int Quantity) {
        this->Quantity = Quantity;
    }
    void setBrand(string Brand) {
        this->Brand = Brand;
    }
    string getBrand() {
        return this->Brand;
    }

};

class Food : public Product {

    string MNFday;
    string ExpDay;

public:
   /* Food(string MNFday) {
        this->MNFday = MNFday;
    }*/

    void setMNFday(string MNFday) {
        this->MNFday = MNFday;
    }
    string getNMFday() {
        return this->MNFday;
    }

    void setExpDay(string ExpDay) {
        this->MNFday = ExpDay;
    }
    string getExpDay() {
        return this->ExpDay;
    }
};

class Clothes : public Product {
    string Size;
public:

   /* Clothes(string Size = ""){
        this->Size = Size;
    }*/

    void setSize(string Size) {
        this->Size = Size;
    }

    string getSize() {
        return this->Size;
    }
};

