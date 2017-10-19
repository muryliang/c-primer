#include "my.h"

class A {
    private:
        virtual int pr() {return a;}
    protected:
        int a;
    public:
        int c;
        A(int p=100): a(p) {c = 101;cout << "default A " << p << endl;}
        virtual int get() {return a;}
        int hehe() { return 10;}
        int hehe(int a) { return 20;}
        ~A() { cout << "del A" << endl;}
};

class B: public A {
    private:
        int b;
    protected:
        using A::a;
    public:
        virtual int pr() override {return b;}
        B(int p=20):b(p) {cout << "in constructor B" << endl;}
        int get() override {cout << "return a " << endl; return a;}
        virtual int get2()  = 0;
        ~B() { cout << "del B" << endl;}
};

class C: public B {
    public:
        using A::hehe;
        int get2() { cout << "in get2 " << endl; return 2;}
        int get() override {cout << "return a " << endl; return a;}
        int hehe() { return 30;}
        ~C() { cout << "del C" << endl;}
        int operator~() const {
            cout << " in nego" << endl;
            return 1;
        }
};

int main() {
    C c;
    B &a = c;
    ~(c);
    return 0;
}

