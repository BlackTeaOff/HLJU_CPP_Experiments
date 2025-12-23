#pragma once
#include <iostream>
#include <string>

class Songer {
    private:
      std::string name;
      int fans_count;

      static int count; // 静态成员(一个类共用)
    public:
      Songer();
      Songer(std::string name, int fans_count);
      Songer(const Songer& source);
      ~Songer();
      void Set(int fans_count);
      friend void PK(Songer& s1, Songer& s2);
      
      static void ShowCount(); // 静态方法

      void printSonger(); // 输出Songer测试信息

      void operator+(int fans); // 1
      int operator>(const Songer& second); // 2
      // int operator<(const Songer& second);
      friend int operator==(const Songer& first, const Songer& second); // 3 (友元函数不是类中的函数)
      Songer& operator++(); // 4 前置++
      friend Songer operator++(Songer& first, int); // 5 区分后置++, 第二个参数int
      friend std::ostream& operator<<(std::ostream& myout, const Songer& s); // 6 (选做)
};