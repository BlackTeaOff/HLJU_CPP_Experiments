#include "Person.h"
#include "Student.h"
#include "Graduate.h"
#include <iostream>
using namespace std;

int main() {
    cout <<"---------------"<< endl;
    cout << "People默认构造" << endl;
    Person p1;
    p1.showInfo();

    cout << "---------------" << endl;
    cout << "Student默认构造" << endl;
    Student s1;
    s1.showStuInfo();
    s1.showInfo();
    cout << "---------------" << endl;
    cout << "Student带参构造" << endl;
    Student s2("test", "man", 18, 1, "UNI", "COM");
    s2.showInfo();
    s2.showStuInfo();
    cout << "---------------" << endl;
    cout << "Student复制构造" << endl;
    Student s3(s2);
    s3.showInfo();
    s3.showStuInfo();
    cout << "---------------" << endl;
    cout << "Student修改信息" << endl;
    s3.setInfo("good", "woman", 0);
    s3.setStuInfo(1000, "sru", "PIG");
    s3.showInfo();
    s3.showStuInfo();

    cout << "---------------" << endl;
    cout << "Graduate默认构造" << endl;
    Graduate g1;
    g1.setRDir("FEEDING");
    g1.showRDir();
    g1.showInfo();
    g1.showStuInfo();
    cout << "---------------" << endl;
    cout << "Graduate带参构造" << endl;
    Graduate g2("test", "man", 10, 2, "UNI", "COM", "PROG");
    g2.showInfo();
    g2.showStuInfo();
    g2.showRDir();
    cout << "---------------" << endl;
    cout << "Graduate复制构造" << endl;
    Graduate g3(g2);
    g3.showInfo();
    g3.showStuInfo();
    g3.showRDir();
}