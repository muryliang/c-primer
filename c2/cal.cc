#include <iostream>

int main() {
    unsigned u1 = 10, u2 = 42;
    std::cout << u1 - u2 << std::endl;
    std::cout << u2 - u1 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u1 << std::endl;
    std::cout << u1 - i << std::endl;

    int month = 9, day = 7;
    std::cout << month << " " << day << std::endl;
    std::cout << "Who goes with F\145rgus?\012" << std::endl;
    std::cout << "2\tM\n" << std::endl;
    return 0;
}
