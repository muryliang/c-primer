#include "strblob.h"

int main() {
    StrBlob const b1;
    const StrBlob b2{"a","b","c"};
    StrBlobPtr b3(b2);
    return 0;
}
