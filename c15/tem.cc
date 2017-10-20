#include "my.h"

template <typename T> bool compare(const T& p1, const T&p2) {
    if (less<T>()(p1, p2)) return -1;
    else if (p1 > p2) return 1;
    else return 0;
}

template <typename T> class A {
    friend T;
    public:
        T a;
};


int main() {
    A<int> p;
    cout << p.a << endl;
    return 0;
}
