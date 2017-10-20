#include "my.h"

template <typename T>
ostream& print(ostream &os, const T &t) {
    cout << "size of args are: 1" << endl;
    return os << t;
}

template <typename T, typename... Args>
ostream& print(ostream &os, const T &t, const Args... rest) {
    os << t <<", ";
    cout << "size of args are: " << sizeof... (rest) + 1 << endl;
    return print(os, rest...);
}

int main() {
    print(cout, "My", "name", "is");
    cout << endl;
    return 0;
}
