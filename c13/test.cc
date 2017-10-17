#include "my.h"

struct X {
    X() {cout << "X()" << endl;}
    X(const X&) {cout << "X(const X&)" << endl;}
    ~X() {cout <<"~X()" << endl;}
    X& operator=(const X& a) { cout << "operator=" << endl; return *this;}
};

void printdebug(const string &msg) {
    cout << msg << endl;
}

int main() {
    printdebug("create a X");
    X a;
    printdebug("assign a to b use =");
    X b = a;
    printdebug("assign a to c not use =");
    X c(a);
    printdebug("assign a to c not init");
    c = a;
    return 0;
}

