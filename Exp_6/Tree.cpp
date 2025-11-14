#include "Tree.h"
#include <iostream>
using namespace std;

void Tree::show() {
    cout << "树是非常重要的一种数据结构!" << endl;
}

Tree::~Tree() {
    cout << "析构一个树对象!" << endl;
}