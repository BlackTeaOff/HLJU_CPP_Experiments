#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person {
    private:
      int Num;
      std::string School;
      std::string Major;
    public:
      Student();
      Student(std::string name, std::string sex, int age, int Num, std::string School, std::string Major);
      Student(const Student& source);
      ~Student();
      void setStuInfo(int num, std::string School, std::string Major);
      void showStuInfo();
};

#endif