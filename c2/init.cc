#include <iostream>
std::string global_str;
int global_int;
int main() {
    int local_int;
    std::string local_str;
    std::cout << ":" << global_str << ":" << std::endl;
    std::cout << ":" << global_int << ":" << std::endl;
    std::cout << ":" << local_str << ":" << std::endl;
    std::cout << ":" << local_int << ":" << std::endl;
    int _;
    double Double = 3.14;
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i) 
        sum += i;
    std::cout << i << " " << sum << std::endl;
    const int &j = 42;
    return 0;
}
