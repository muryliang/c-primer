#include "my.h"

void exch(int &a, int &b);

int main() {
    int a = 2;
    int b = 3;
    cout << "before exch: " << a << " " << b << endl;
    exch(a, b);
    cout << "after exch: " << a << " " << b << endl;
    return 0;
}

void exch(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}


