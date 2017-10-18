#include "my.h"

class C {
    public:
        int a;
        friend void swap(C &, C&);
        C(int x):a(x) {};
};

inline void swap(C & p, C& q) {
    int c = p.a;
    p.a = q.a;
    q.a = c;
    cout << "swap" << endl;
}

int main() {
    C m(1);
    C n(2);
    cout << m.a << " " << n.a << endl;
//    m.swap(n);
    swap(m,n);
    return 0;
}

