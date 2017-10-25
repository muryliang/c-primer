#include "my.h"

class A {
    private:
        int a;
        int b;
    public:
        A(int p, int q): a(p), b(q) { cout << " in A ctor" << endl;}
        A(const A& b) { a = b.a; cout << " in A copy" << endl;}
        const int& get() const { return a;}
        const int& get() {cout << "not const" << endl; return a;}
};

class B{
    private:
        A k;
    public:
        B(A& a): k(50, 100) { cout << " in B class" << endl;}
};

int main() {
    A a{20, 21};
    cout << "begin" << endl;
    B b{a};
    return 0;
}
