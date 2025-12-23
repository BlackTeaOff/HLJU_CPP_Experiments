#include "Songer.h"
#include <iostream>
using namespace std;

int main() {
    Songer s1("张三", 3);
    Songer s2("李四", 2);

    s1.printSonger();
    s1 + 100; // s1 = 103, s2 = 2
    s1.printSonger();

    printf("s1 > s2: %d\n", s1 > s2);
    printf("s2 > s1: %d\n", s2 > s1);
    // printf("s2 < s1: %d\n", s2 < s1);
    printf("s1 == s2: %d\n", s1 == s2);
    s2 + 101; // s1 = 103, s2 = 103
    printf("s1 == s2: %d\n", s1 == s2);

    s1.printSonger();
    (++s1).printSonger(); // (++s1)返回的是Songer类型
    s2.printSonger();
    (s2++).printSonger(); // (s2++)返回仍是加之前的对象(temp)
    s2.printSonger();

    cout << s1 << s2; // cout是ostream类型, cout << s1隐式调用ostream& operator<<(cout, s1), 向cout这个对象写入s1的信息 
    // (cout << s1)返回一个ostream&类型, cout << s2, 隐式调用operator(cout, s2), 继续向cout对象写入s2的信息
}
