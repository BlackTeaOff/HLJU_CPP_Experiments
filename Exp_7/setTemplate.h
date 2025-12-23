/* 已弃用
#include <iostream>

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
*/