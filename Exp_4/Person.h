#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
    private:
      std::string name;
      std::string sex;
      int age;
    public:
      Person();
      Person(std::string name, std::string sex, int age);
      Person(const Person& source);
      ~Person();
      void setInfo(std::string name, std::string sex, int age);
      void showInfo();
};

#endif