#include "person.h"


ostream& print(ostream &os, const Person& a) {
    os << "name: " << a.getname() << " addr: " << a.getaddr();
    return os;
}

Person p;
int main() {
//    p.getint();
//    p.getname2();
    p.getint2();
    print(cout, p);
}
