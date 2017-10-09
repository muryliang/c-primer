#include <iostream>
int main() {
    int i  = 1, &j = i;
    int *p = &j;
    int *&q = p;
    int &*k = &j;
    std::cout << *q << " " << q << p << std::endl;
    return 0;
}
