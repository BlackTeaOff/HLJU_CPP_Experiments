#pragma once
#include <iostream>
#include <string>

class Student {
    private:
      int Num;
      std::string name;
      std::string sex;
      double score;
    public:
      Student();
      Student(int Num, std::string name, std::string sex, double score);
      Student(const Student& source);
      void setStu(int Num, std::string name, std::string sex, double score);
      void showStu();

      friend std::istream& operator>>(std::istream& first, Student& second); // 重载提取运算符
      friend std::ostream& operator<<(std::ostream& first, Student& second); // 重载插入运算符
      double getScore();
};
