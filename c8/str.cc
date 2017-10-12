#include "my.h"

void hehe(stringstream &ss) {
    return;
}

int main() {
    stringstream ss("hehe");
    ss << "one more time" << endl;
    ss << "two more time" << endl;
    cout << ss.str() << endl;
    return 0;
}
