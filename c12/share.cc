#include "my.h"

void f(shared_ptr<int> a) {
    cout << a.use_count() << endl;
}

int main() {
    shared_ptr<int> p(make_shared<int>(20));
    shared_ptr<int> q(new int(40));
    shared_ptr<int> p2 = p;
    int *k = new int(2);
    p.reset(k);
    f(p);
    return 0;
}
