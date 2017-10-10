#include "my.h"

bool checkUp(const string &s) {
    for (auto i: s) {
        if (isupper(i))
            return true;
    }
    return false;
}

void turnDown(string &s) {
    for (auto &i: s) { 
        if (isupper(i))
            i = tolower(i);
    }
}

int main() {
    string s;
    cin >> s;
    bool res = checkUp(s);
    if (res) {
        turnDown(s);
    }
    cout << s << endl;
    return 0;
}
