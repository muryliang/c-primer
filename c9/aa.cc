#include "my.h"

void func(ostream &i) {
    i << "hehe" << endl;
}

int main() {
    int i = 20;
    auto f = bind(func, _1);
    f(cout);
    return 0;
}
