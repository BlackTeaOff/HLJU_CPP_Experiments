#include "StudentControl.h"
#include <iostream>
#include <fstream>
#include <iomanip> // setw
#include <algorithm> // sort
using namespace std;

StudentControl::StudentControl() : num(0) {}
int StudentControl::loadFromFile(char* filename) {
    ifstream ifs(filename);
    if (!ifs) {
        cout << "文件打开失败" << endl;
        return 1;
    }
    vecStu.clear(); // 读取前先清空当前列表
    Student temp; // 临时学生temp, 用于存储从文件读进来的一个学生信息
    while (ifs >> temp) { // 调用operator>>(ifs, temp), ifs是ifstream类型, 上转型为父类istream类型
        vecStu.push_back(temp); // 把从文件读进来的学生信息存到数组(容器)里
    } // ifs.eof()返回的是上一次有没有读取成功, 直接用ifs<<temp的返回值判断即可(bool函数重载为(ifs>>temp).good)
    num = vecStu.size();
    ifs.close();
    cout << "从文件读取" << num << "条学生数据" << endl;
    return 0;
}

void StudentControl::display() {
    if (vecStu.empty()) {
        cout << "无学生信息" << endl;
        return;
    }
    cout << "------------------------------------------------------------------" << endl;
    cout << left << setw(20) << "学号" << 
                    setw(20) << "姓名" <<
                    setw(20) << "性别" <<
                    setw(20) << "成绩" << endl;
    for (int i = 0; i < vecStu.size(); i++) {
        vecStu[i].showStu();
    }
    cout << "------------------------------------------------------------------" << endl;
}

void StudentControl::input() {
    int n;
    cout << "请输入要添加的学生人数: ";
    cin >> n;
    cout << "格式: 学号 姓名 性别 成绩" << endl;
    for (int i = 0; i < n; i++) {
        cout << "请输入第" << i + 1 << "个学生的信息" << endl;
        Student temp;
        cin >> temp;
        vecStu.push_back(temp);
    }
}

void StudentControl::sort() { // 使用sort函数
    std::sort(vecStu.begin(), vecStu.end(), [](Student& a, Student& b) { // lambda
        return a.getScore() > b.getScore();
    });
}

int StudentControl::writeToFile(char* filename) {
    ofstream ofs(filename);
    if (!ofs) {
        cout << "无法写入该文件" << endl;
        return 1;
    }

    for (int i = 0; i < vecStu.size(); i++) {
        ofs << vecStu[i];
    }
    ofs.close();
    cout << "已存入文件" << endl;
    return 0;
}

StudentControl::~StudentControl() {

}