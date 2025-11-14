#include "Binary_Sort_Tree.h"
#include <iostream>
using namespace std;

void Binary_Sort_Tree::show() {
    cout << "二叉排序树首先是一棵二叉树!" << endl;
    cout << "如果左子树不空, 左子树小于根节点!" << endl;
    cout << "如果右子树不空, 右子树大于根节点!" << endl;
}

Binary_Sort_Tree::~Binary_Sort_Tree() {
    cout << "析构一个二叉排序树对象!" << endl;
}