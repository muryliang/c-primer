#include "my.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div2(int a, int b) {
    if (b != 0)
        return a / b;
    else
        throw runtime_error("can not divide zero");
}

int main() {
    vector<int (*)(int, int)> vf;
    vf.push_back(add);
    vf.push_back(sub);
    vf.push_back(mul);
    vf.push_back(div2);

    for (auto f: vf) 
        cout << f(1,2) << *f << endl;
}
