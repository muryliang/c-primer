#include "my.h"

string make_plural(const string &s,  char postfix = 's') {
    return s + postfix;
}

int main() {
    string s = "word";
    string res = make_plural(s, ' ');
    string reses = make_plural(s);
    cout << res +  " " + reses << endl;
    return 0;
}
