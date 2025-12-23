#include "Student.h"
#include "StudentControl.h"
#include <iostream>
using namespace std;

void menu() {
    cout << "--------------------" << endl;
    cout << "1. 录入学生信息" << endl;
    cout << "2. 显示所有信息" << endl;
    cout << "3. 按成绩排序" << endl;
    cout << "4. 保存到文件" << endl;
    cout << "5. 从文件加载" << endl;
    cout << "--------------------" << endl;
}

int main() {
    StudentControl sc;
    char path[100];

    int choice;
    while (1) {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                sc.input();
                break;
            case 2:
                sc.display();
                break;
            case 3:
                sc.sort();
                break;
            case 4:
                cout << "请输入文件路径: ";
                cin >> path;
                sc.writeToFile(path);
                break;
            case 5:
                cout << "请输入文件路径: ";
                cin >> path;
                sc.loadFromFile(path);
                break;
            default:
                return 0;
        }
    }

    /*
    Student s1;
    s1.showStu();

    StudentControl sc;
    sc.input();
    sc.display();
    char path[30] = "..\\files\\studentsExample.txt";
    //sc.writeToFile(path);
    //sc.loadFromFile(path);
    sc.display();
    sc.sort();
    sc.display();
    */
}