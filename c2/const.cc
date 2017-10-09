#include <iostream>

int main() {
    int i = 2;
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    std::cout << i << " " << *p3 << std::endl;
    const int a = 1, b = 2;
    b = 4;
    return 0;
}
