#include "my.h"

namespace AAA{
    class A {
        public:
        string s;
        A(string p): s(p) {}
    };
    ostream& operator<< (ostream &os, A& a) {
//        std::operator<<(os, "in AAA space");
        os << a.s << " in A space" << endl;
        return os;
    }
}

using AAA::A;
/*
ostream& operator<< (ostream &os, A& a) {
    std::operator<<(os, "global space");
//    os << a.s << " global space" << endl;
    return os;
}
*/
int main() {
    A a("hello");
    cout << a;
    return 0;
}

