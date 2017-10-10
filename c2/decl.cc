#include <iostream>

struct Foo { 
    int a = 2.1;
//    std::string hehe("123456");
};

int main() {
    int k(10);
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    Foo foo;
    foo.a = 20;
    ++c;
    ++d;
    std::cout<< k+a << " " << b << " " << c << std::endl;
    return 0;
}
