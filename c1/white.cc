#include <iostream>

int main() {
    int sum = 0 ,i = 50;
    std::cout << "start count from 50 to 100" << std::endl;
    while (i <= 100) {
        sum += i;
        i++;
    }
    std::cout << "The sum from 50 to 100 is " << sum << std::endl;
    return 0;
}
