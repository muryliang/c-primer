#include <string>
using std::string;

int main() {
    const int i = 2;
    auto &a = i;
    a = 3;
    return 0;
}
