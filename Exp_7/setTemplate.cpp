#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

template <class T>
class Set {
    private:
      T* value; // T类型指针, 用于存放集合的元素的动态数组, 长度为length
      int size; // 集合大小(元素个数)(当前元素个数)
      int length; // 动态数组长度
    public:
      Set(int len = 50); // 如果没传值就默认50, 传值就用传入的值
      Set(const Set<T>& A);
      ~Set();
      Set<T>& operator=(const Set<T>& r);
      Set<T> operator+(const Set<T>& r);
      void display(); // 输出集合中所有元素
      bool isExist(T v); // 判断集合中是否包含元素v
      void add(T v); // 向集合中添加一个元素
      int getSize(); // 返回集合的大小
      int getLength(); // 返回动态数组value的大小
      void Resize(int len); // 修改动态数组value的大小 
};

template <typename T>
Set<T>::Set(int len) : value(new T[len]), size(0), length(len) {}

template <typename T>
Set<T>::Set(const Set<T>& A) : value(new T[A.length]), size(A.size), length(A.length) {
    for (int i = 0; i < size; i++) {
        value[i] = A.value[i];
    }
}

template <typename T>
Set<T>::~Set() {
    delete[] value;
}

template <typename T>
bool Set<T>::isExist(T v) {
    for (int i = 0; i < size; i++) {
        if (value[i] == v) {
            return true;
        }
    }
    return false;
}

template <typename T>
void Set<T>::Resize(int len) {
    T* temp = new T[len];
    for (int i = 0; i < size; i++) {
        temp[i] = value[i];
    }

    delete[] value;
    value = temp;
    length = len;
}

template <typename T>
void Set<T>::add(T v) {
    if (isExist(v)) {
        return;
    }

    if (size >= length) {
        Resize(length * 2);
    }

    value[size] = v;
    size++;
}

template <typename T>
Set<T>& Set<T>::operator=(const Set<T>& r) { // 返回Set<T>&是为了支持链式赋值, A = B相当于调用A.operator=(B);
    if (this == &r) {
        return *this;
    }
    
    delete[] value;

    size = r.size;
    length = r.length;
    value = new T[length];
    for (int i = 0; i < size; i++) {
        value[i] = r.value[i];
    }
    return *this;
}

template <typename T>
Set<T> Set<T>::operator+(const Set<T>& r) { // 一个对象+一个对象返回一个新对象, 该对象包含两个集合所有不重复元素
    Set<T> newSet(this->size + r.size);

    for (int i = 0; i < this->size; i++) {
        newSet.add(this->value[i]);
    }

    for (int i = 0; i < r.size; i++) {
        newSet.add(r.value[i]);
    }

    return newSet;
}

template <typename T>
int Set<T>::getSize() {
    return size;
}

template <typename T>
int Set<T>::getLength() {
    return length;
}

template <typename T>
void Set<T>::display() {
    for (int i = 0; i < size; i++) {
        cout << value[i] << " ";
    }
    cout << endl;
}

int main() {
    Set<int> s1;
    s1.add(1);
    s1.add(1);
    s1.add(2);
    s1.add(4);
    s1.add(7);
    s1.display();

    Set<int> s2(s1);
    s2.add(10);
    s2.add(100);
    s2.display();

    s1.add(999);
    Set<int> s3 = s1 + s2;
    s3.display();
    cout << s3.getLength() << endl;
    cout << s3.getSize() << endl;

    Set<string> s4;
    s4.add("test1");
    s4.add("test1");
    s4.add("test2");
    s4.display();
}
