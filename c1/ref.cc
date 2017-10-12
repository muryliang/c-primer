#include <iostream>

int main() {
    int a = 2;
    int &b = a;
    std::cout << &a << std::endl << &b <<std::endl;
    return 0;
}
