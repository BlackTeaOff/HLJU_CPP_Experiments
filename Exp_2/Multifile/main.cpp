#include "Date_People.h"

#include <iostream>
using namespace std;

int main() {
    Date inst_1;               // 默认构造函数
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