#include "my.h"

int main() {
    ofstream fs1("/tmp/cc", istream::in | istream::app);
    cout << fs1.is_open() << endl;
    if (!fs1) {
        cout <<"open fail" << endl;
        cout << fs1.good() << " " << fs1.fail() << " " << fs1.bad() << endl;
    }
    fs1.close();
    fs1.open("/tmp/bb");
    cout << fs1.is_open() << endl;
    return 0;
}
