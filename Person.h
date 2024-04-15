#pragma once
#include <iostream>
#include "Account.h"
#include "Credit_Card.h"

using namespace std;


class Person : public Account {
    string Name;
    int ID_Person;
    string Gender;
    string Address;
public:


    void setName( string Name) {
        this->Name = Name;
    }

     string getName() {
        return this->Name;
    }

    int getID_Person() {
        return this->ID_Person;
    }
    void setID_Person(int ID) {
        this->ID_Person = ID;
    }

    void setGender(string Gender) {
        this->Gender = Gender;
    }

    string getGender() {
        return this->Gender;
    }

    void setAddress(string Address) {
        this->Address = Address;
    }
    string getAddress() {
        return this->Address;
    }
};

class Staff : public Person, public Credit_card {

    string Section;           
    string Academic_standard; 
    double coefficients_salary;          

public:
    //Staff(string Section, string Academic_standard, int Basicsalary) {

    //    this->Section = Section;
    //    this->Academic_standard = Academic_standard;
    //    this->coefficients_salary  = Basicsalary;
    //}
    void setSection(string Section) {
        this->Section = Section;
    }
    string getSection() {
        return this->Section;
    }

    void setAcademicStandard(string AcademicStandard) {
        this->Academic_standard = AcademicStandard;
    }

    string getAcademic() {
        return this->Academic_standard;
    }

    void setCoefficientsSalary( double Salary) {
        this->coefficients_salary = Salary;
    }
    double getBasicsalary() {
        return this->coefficients_salary;
    }
};

class Customer : public Person, public Credit_card{
    int Point;
    int Rank;

public:
  /*  Customer(int Point = 0, int Rank = 0) {
        this->Point = Point;
        this->Rank = Rank;
    }*/
    void point(int Point) {
        this->Point = Point;
    }

    int getPoint() {
        return this->Point;
    }

    void setRank(int Rank) {
        this->Rank = Rank;
    }

    int getRank() {
        return this->Rank;
    }
};