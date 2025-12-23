#include "Student.h"
#include <iostream>
#include <iomanip>
using namespace std;

Student::Student() : Num(0), name(""), sex(""), score(0) {}
Student::Student(int Num, string name, string sex, double score) : Num(Num), name(name), sex(sex), score(score) {}
Student::Student(const Student& source) : Num(source.Num), name(source.name), sex(source.sex), score(source.score) {}
void Student::setStu(int Num, string name, string sex, double score) {
    this->Num = Num;
    this->name = name;
    this->sex = sex;
    this->score = score;
}
void Student::showStu() {
    cout << left << setw(18) << Num << 
                    setw(18) << name <<
                    setw(18) << sex <<  
                    setw(18) << score << endl;
}

istream& operator>>(istream& first, Student& second) { // ifstream是istream的子类, 所以可以用istream, 而且支持cin
    first >> second.Num >> second.name >> second.sex >> second.score;
    return first;
}

ostream& operator<<(ostream& first, Student& second) {
    first << second.Num << " " << second.name << " " << second.sex << " " << second.score << "\n";
    return first;
}

double Student::getScore() {
    return score;
}