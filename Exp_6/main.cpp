#include "Binary_Sort_Tree.h"
#include <iostream>
using namespace std;

void refTree(Tree& T) {
    T.show();
}

void pointerTree(Tree* T) {
    T->show();
}

int main() {
    Tree T;
    Binary_Tree TB;
    Binary_Sort_Tree TSB;
    Tree& t = T;
    Tree& tb = TB;
    Tree& tsb = TSB;
    refTree(t);
    refTree(tb);
    refTree(tsb);

    cout << "--------------------" << endl;

    Tree* pointerT = &T;
    pointerTree(pointerT);
    pointerT = &TB;
    pointerTree(pointerT);
    pointerT = &TSB;
    pointerTree(pointerT);

    cout << "--------------------" << endl;

    cout << "析构Tree: " << endl;
    Tree* PT = new Tree;
    delete PT;
    cout << "析构Binary_Tree: " << endl;
    PT = new Binary_Tree;
    delete PT;
    cout << "析构Binary_Sort_Tree: " << endl;
    PT = new Binary_Sort_Tree;
    delete PT;

    cout << "--------------------" << endl;
}