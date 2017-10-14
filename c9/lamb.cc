#include "my.h"

int main() {
    int local = 20;
    auto f = [local](const int &a) -> int { return local + a;};
    cout << f(2) << endl;
    return 0;
}
