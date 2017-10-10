#include <iostream>

int main() {
    int value, sum = 0;
    std::cout << "keep input until end of file" << std::endl;

    while ( std::cin >> value ) {
        sum += value;
    }
    std::cout << "the sum of all values are " << sum << std::endl;
    return 0;
}
