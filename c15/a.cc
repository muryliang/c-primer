#include "my.h"

class A {
    public:
        A(initializer_list<int> a, int k): vec(a), c(k) { cout << " in initializer " << endl;}
        A(const A& b): vec(b.vec) {cout << " in copy " << endl;}
        A() {  cout << "in default " << endl;}
        A& operator=(const A& b) { vec = b.vec; cout << " in assign" << endl; return *this; }
    private:
        vector<int> vec;
        int c;
};

int main() {
//    A a{1,2,3,4,5};
    A b = ({1,2,3,4,5},20);
    return 0;
}
