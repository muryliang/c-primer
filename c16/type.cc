#include "my.h"


class A {
    public:
        int a;
};

int main() {
    A *a = new A();
    cout << std::boolalpha << (typeid(A) == typeid(*a)) << std::noboolalpha;
    return 0;
}

