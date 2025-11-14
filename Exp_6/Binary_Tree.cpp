#include "Binary_Tree.h"
#include <iostream>
using namespace std;

void Binary_Tree::show() {
    cout << "二叉树每个结点至多有两棵子树, 且有左右之分!" << endl;
}

Binary_Tree::~Binary_Tree() {
    cout << "析构一个二叉树对象!" << endl;
}