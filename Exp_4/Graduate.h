#ifndef GRADUATE_H
#define GRADUATE_H

#include "Student.h"
#include <string>

class Graduate : public Student{
    private:
      std::string Research_Direction;
    public:
      Graduate();
      Graduate(std::string name, std::string sex, int age, int Num, std::string School, std::string Major, std::string Research_Direction);
      Graduate(const Graduate& source);
      ~Graduate();
      void setRDir(std::string Research_Direction);
      void showRDir();
};

#endif