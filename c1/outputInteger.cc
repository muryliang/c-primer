#include <iostream>

int main() {
    int v1 = 0, v2 = 0;

    std::cout << "Input two numbers" << std::endl;
    std::cin >> v1 >> v2;
    if (v1 > v2) {
        std::cout << "sequence is wrong" << std::endl;
        return 0;
    }
    
    int var = v1;
    while (var <= v2) {
        std::cout << var << " ";
        var ++;
    }
    std::cout << std::endl;
    return 0;
}   
