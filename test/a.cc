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

void end1(int* p) noexcept {
    cout << "now end of p" << endl;
}

int main() {
    shared_ptr<int> aa(static_cast<int*>(0), end1);
    return 0;
}
