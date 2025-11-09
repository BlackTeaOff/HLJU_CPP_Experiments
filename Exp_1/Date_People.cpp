#include <iostream>
using namespace std;

class Date {
    private:
        int year;
        int mon;
        int day;
    public:
        Date(); // 默认构造函数
        Date(int year, int mon, int day); // 带参构造函数
        Date(const Date& source); // 复制构造函数
        void setDate(int year, int mon, int day);
        void showDate();
        ~Date(); // 析构函数
};

Date::Date() : year(0), mon(0), day(0) {}

Date::Date(int year, int mon, int day) : year(year), mon(mon), day(day) {}

Date::Date(const Date& source) : year(source.year), mon(source.mon), day(source.day) {
    cout << "Date调用复制构造函数" << endl;
}

void Date::setDate(int year, int mon, int day) {
    this->year = year;
    this->mon = mon;
    this->day = day;
}

void Date::showDate() {
    cout << year << " " << mon << " " << day << endl;
}

Date::~Date() {
    cout << "Date调用析构函数" << endl;
}

class People{
    private:
        int num;
        string name;
        int id;
        Date birth;
    public:
        People();
        People(int num, string name, int id, Date& birth);
        People(int num, string name, int id, int year, int mon, int day);
        People(const People& source);
        void inputPeople(int num, string name, int id, Date& birth);
        void inputPeople(int num, string name, int id, int year, int mon, int day);
        void showPeople();
        ~People();
};

People::People() : num(0), name(""),id(0) {}

People::People(int num, string name, int id, Date& birth) : num(num), name(name), id(id), birth(birth) {}

People::People(int num, string name, int id, int year, int mon, int day) : num(num), name(name), id(id), birth(year, mon, day) {}

People::People(const People& source) : num(source.num), name(source.name), id(source.id), birth(source.birth) {
    cout << "People调用复制构造函数" << endl;
}

void People::inputPeople(int num, string name, int id, Date& birth) {
    this->num = num;
    this->name = name;
    this->id = id;
    this->birth = birth;
}

void People::inputPeople(int num, string name, int id, int year, int mon, int day) {
    this->num = num;
    this->name = name;
    this->id = id;
    this->birth = Date(year, mon, day);
}

void People::showPeople() {
    cout << num << " " << name << " " << id << " ";
    birth.showDate();
    cout << endl;
}

People::~People() {
    cout << "People调用析构函数" << endl;
}

int main() {
    Date inst_1; // 默认构造函数
    Date inst_2(2025, 10, 23); // 在栈上(自动管理内存)
    inst_1.showDate();
    inst_2.showDate();
    inst_1.setDate(2025, 12, 31);
    inst_1.showDate();
    Date inst_3(inst_1);
    inst_3.showDate();

    People person_1;
    person_1.showPeople();
    People person_2(2, "test2", 20245109, inst_1);
    person_2.showPeople();
    People person_3(3, "test3", 20240000, 2024, 1, 1);
    person_3.showPeople();
    person_1.inputPeople(1, "test", 2000000, inst_2);
    person_1.showPeople();
    People person_4(person_1);
    person_4.showPeople();
}