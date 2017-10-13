#include "my.h"

int main() {
    string s("ihehe");
    string::size_type pos = 0;
    while ((pos = s.find_first_of('h', pos)) != string::npos) {
        cout << pos << endl;
        ++pos;
    }
//    cout << string::npos << endl;
    return 0;
}
