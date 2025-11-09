#include <iostream>
using namespace std;

class Songer {
    private:
        string name;
        int fans_count;
        static int count;
    public:
        Songer(string name, int fans_count);
        Songer(const Songer& source);
        void setFans(int fans_count);
        static void showCount();
        ~Songer();
        friend void PK(Songer& s1, Songer& s2);
};

Songer::Songer(string name, int fans_count) : name(name), fans_count(fans_count) {
    count++;
}

Songer::Songer(const Songer& source) : name(source.name), fans_count(source.fans_count) {
    count++;
}

void Songer::setFans(int fans_count) {
    this->fans_count = fans_count;
}

void Songer::showCount() {
    cout << "歌手数：" << count << endl;
}

Songer::~Songer() {
    cout << "析构函数执行" << endl;
}

void PK(Songer& s1, Songer& s2) {
    if (s1.fans_count > s2.fans_count) {
        cout << s1.name << "战胜" << s2.name << endl;
    } else {
        cout << s2.name << "战胜" << s1.name << endl;
    }
}

int Songer::count = 0;

int main() {
    Songer::showCount();
    Songer s1("张三", 100);
    Songer::showCount();
    Songer s2("李四", 120);
    Songer::showCount();
    PK(s1, s2);
    s1.setFans(200);
    PK(s1, s2);
    Songer s3(s1);
    Songer::showCount();
}