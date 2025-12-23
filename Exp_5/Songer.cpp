#include "Songer.h"
#include <iostream>
#include <string>
using namespace std;

int Songer::count = 0; // 初始化静态成员变量

Songer::Songer() : fans_count(0) {
    count++;
}
Songer::Songer(string name, int fans_count) : name(name), fans_count(fans_count) {
    count++;
}
Songer::Songer(const Songer& source) : name(source.name), fans_count(source.fans_count) {
    count++;
}
Songer::~Songer() {
    count--;
};
void Songer::Set(int fans_count) {
    this->fans_count = fans_count;
}

void PK(Songer& s1, Songer& s2) {
    if (s1.fans_count > s2.fans_count) {
        cout << s1.name << "战胜" << s2.name << endl;
    } else {
        cout << s2.name << "战胜" << s1.name << endl;
    }
}

void Songer::ShowCount() {
    cout << count << endl;
}

void Songer::printSonger() {
    cout << "姓名: " << name << ", " << "粉丝数: " << fans_count << endl;
}

void Songer::operator+(int fans) { // 1
    this->fans_count += fans;
}
int Songer::operator>(const Songer& second) { // 2
    if (this->fans_count > second.fans_count) {
        return 1;
    } else {
        return 0;
    }
}
/*
int Songer::operator<(const Songer& second) {
    return !operator>(second);
}
*/
int operator==(const Songer& first, const Songer& second) { // 3
    if (first.fans_count == second.fans_count) {
        return 1;
    } else {
        return 0;
    }
}
Songer& Songer::operator++() { // 4 前置++返回的是加后的对象, 所以返回自己即可
    this->fans_count += 10;
    return *this;
}
Songer operator++(Songer& first, int) { // 5 后置++返回的是加之前的对象而不是加后的对象, 所以返回Songer类型
    Songer temp(first); // 保存加之前的对象
    first.fans_count += 10;
    return temp;
}
ostream& operator<<(ostream& out, const Songer& s) { // 6 &-支持链式调用(返回自身的引用继续和下一个对象操作)
    out << "姓名: " << s.name << " " << "粉丝数: " << s.fans_count << endl;
    return out;
}