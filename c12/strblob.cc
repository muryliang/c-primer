#include "strblob.h"

int main() {
    StrBlob b1;
    StrBlob b2{"a","b","c"};
    b1 = b2;
    b2.push_back("about");
    cout << b1.use_count() << endl;
    cout << b2.use_count() << endl;
    return 0;
}
