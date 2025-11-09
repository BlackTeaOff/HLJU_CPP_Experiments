#include <iostream>
using namespace std; // 多个命名空间防止重名, 例如std::cout和test::cout

class Tree {
    private:
        int ages;
    public:
        Tree();
        Tree(int ages);
        void grow(int years); // 或者直接在这里面写
        int age();
};

Tree::Tree() {
    this->ages = 0; // 类内的函数可以访问private成员
}

Tree::Tree(int ages) {
    this->ages = ages; // 类内的函数可以访问private成员
}

void Tree::grow(int years) { // 在外面写需加上类名变为成员函数, 有this指针
    this->ages += years;
}

int Tree::age() {
    return this->ages;
}

int main() {
    Tree t1; // 默认构造函数
    cout << t1.age() << endl;
    t1.grow(100);
    cout << t1.age() << endl;
    Tree t2(250);
    cout << t2.age() << endl;
    t2.grow(10);
    cout << t2.age() << endl;
}