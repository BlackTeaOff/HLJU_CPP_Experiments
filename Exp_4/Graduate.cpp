#include "Graduate.h"
#include <iostream>
#include <string>
using namespace std;

Graduate::Graduate() : Student(), Research_Direction("") {}
Graduate::Graduate(string name, string sex, int age, int Num, string School, string Major, string Research_Direction) 
    : Student(name, sex, age, Num, School, Major), Research_Direction(Research_Direction) {}
Graduate::Graduate(const Graduate& source) : Student(source), Research_Direction(source.Research_Direction) {}
Graduate::~Graduate() {}
void Graduate::setRDir(string Research_Direction) {
    this->Research_Direction = Research_Direction;
}
void Graduate::showRDir() {
    cout << "Research_Direction: " << Research_Direction << endl;
}
