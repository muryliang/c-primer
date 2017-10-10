#include "my.h"

extern int a[4];
int main() {
    vector<string> vs = {"hehe", "haha"};
    string s("hehehehe");
    cout << "char: " << sizeof (char) << endl;
    cout << "short: " << sizeof (short) << endl;
    cout << "int: " << sizeof (int) << endl;
    cout << "long: " << sizeof (long) << endl;
    cout << "long long : " << sizeof (long long) << endl;
    cout << "float: " << sizeof (float) << endl;
    cout << "double: " << sizeof (double) << endl;
    cout << "long double: " << sizeof (long double) << endl;
    cout << "vector string: " << sizeof (vs) << endl;
    cout << "string: " << sizeof(s) << endl;
    cout << "array: " << sizeof(a) << endl;
    return 0;
}
