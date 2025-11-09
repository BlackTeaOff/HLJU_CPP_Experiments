#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() : Person(), Num(0), School(""), Major("") {}
Student::Student(string name, string sex, int age, int Num, string School, string Major)
    : Person(name, sex, age), Num(Num), School(School), Major(Major) {}
Student::Student(const Student& source) 
    : Person(source), Num(source.Num), School(source.School), Major(source.Major) {}
Student::~Student() {}
void Student::setStuInfo(int Num, string School, string Major) {
    this->Num = Num;
    this->School = School;
    this->Major = Major;
}
void Student::showStuInfo() {
    cout << "Num: " << Num << endl << "School: " << School << endl << "Major: " << Major << endl;
}