#include "my.h"

class Employee {
    private:
        static int cal;
        string name;
        size_t id;
    public:
        size_t getid() const { return id;}
        Employee():name("none"), id(cal++){ }
        Employee(const string &n) :name(n),id(cal++) {}
        Employee(const Employee& e):name(e.name), id(cal++) {}
        Employee& operator=(const Employee& e){ 
            this->name = e.name;
            this->id = cal++; 
            return *this;
        }
};

int Employee::cal = 0;

int main() {
    Employee a;
    Employee b(a) , c;
    c = a;
    cout << a.getid() << endl;
    cout << b.getid() << endl;
    cout << c.getid() << endl;
    return 0;
}
