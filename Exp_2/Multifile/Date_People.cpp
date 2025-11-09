#include "Date_People.h"

#include <iostream>
using namespace std;

Date::Date() : year(0), mon(0), day(0) {}
Date::Date(int year, int mon, int day) : year(year), mon(mon), day(day) {}
Date::Date(const Date& source) : year(source.year), mon(source.mon), day(source.day) {}
Date::~Date() {}
void Date::setDate(int year, int mon, int day) {
    this->year = year;
    this->mon = mon;
    this->day = day;
}
void Date::showDate() {
    cout << year << "" << mon << " " << day << endl;
}


People::People() : num(0), name(""), id(0) {}
People::People(int num, string name, int id, Date& birth) : num(num), name(name), id(id), birth(birth) {}
People::People(int num, string name, int id, int year, int mon, int day) : num(num), name(name), id(id), birth(year, mon, day) {}
People::People(const People& source) : num(source.num), name(source.name), id(source.id), birth(source.birth) {}
People::~People() {}
void People::inputPeople(int num, string name, int id, int year, int mon, int day) {
    this->num = num;
    this->name = name;
    this->id = id;
    this->birth = Date(year, mon, day);
}
void People::inputPeople(int num, string name, int id, Date& birth) {
    this->num = num;
    this->name = name;
    this->id = id;
    this->birth = birth;
}
void People::showPeople() {
    cout << num << " " << name << " " << id << " ";
    birth.showDate();
    cout << endl;
}