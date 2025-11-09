#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() : name(""), sex(""), age(0) {}
Person::Person(string name, string sex, int age) : name(name), sex(sex), age(age) {}
Person::Person(const Person& source) : name(source.name), sex(source.sex), age(source.age) {}
Person::~Person() {}
void Person::setInfo(string name, string sex, int age) {
    this->name = name;
    this->sex = sex;
    this->age = age;
}
void Person::showInfo() {
    cout << "name: " << name << endl << "sex: " << sex << endl << "age: " << age << endl;
}