#pragma once
#include "Student.h"
#include <iostream>
#include <vector>

class StudentControl {
    private:
      std::vector<Student> vecStu;
      int num;
    public:
      StudentControl();
      int loadFromFile(char* filename);
      void display();
      void input();
      void sort();
      int writeToFile(char* filename);
      ~StudentControl();
};
