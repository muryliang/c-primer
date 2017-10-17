#include "my.h"

class hasptr {
    public:
        hasptr(const std::string &s = string()):
            ps(new string(s)), i(0) {}
        hasptr(const hasptr&): ps(new string("hehe")), i(1) {}
        string *ps;
        int i;
};

int main() {
    hasptr a("aaaa");
    hasptr b(a);
    hasptr c = a;
    cout << *a.ps << endl;
    cout << *b.ps << endl;
    cout << *c.ps << endl;
    return 0;
}
