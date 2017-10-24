#include "my.h"

int main() {
    const char *p = "123456789";
    string b("abcdefg");
    string a(p);
    a.append(b);
    cout << a << endl;
}
