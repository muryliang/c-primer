#include "my.h"
#include <unistd.h>

istream& getinput(istream& is) {
    string tmp;
    auto old = is.rdstate();
    cout << "input string"<< endl;
    while (is >> tmp) {
        cout << tmp << endl;
    }
    is.clear(old);
    return is;
}

int main() {
//    getinput(cin);
    string s;
    cout << "eheh ";
    sleep(2);
    cerr << "some error ";
    sleep(2);
    cout << "hehe" << endl;
    return 0;
}


