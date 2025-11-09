#include <iostream>
using namespace std; // .h文件里最好不要有这个

class Date {
    private:
        int year;
        int mon;
        int day;
    public:
        Date();
        Date(int year, int mon, int day);
        Date(const Date& source);
        ~Date();
        void setDate(int year, int mon, int day);
        void showDate();
};

class People {
    private:
      int num;
      string name;
      int id;
      Date birth;
    public:
      People();
      People(int num, string name, int id, Date& birth);
      People(int num, string name, int id, int year, int mon, int day);
      People(const People& source);
      ~People();
      void inputPeople(int num, string name, int id, Date& birth);
      void inputPeople(int num, string name, int id, int year, int mon, int day);
      void showPeople();
};