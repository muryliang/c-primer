#include "my.h"

void repl(string &s, string oldval, const char * newval) {
    if (s == oldval) {
        s = s.replace(0, s.size(), newval, 3);
    }
    cout << s << endl;
}

string& desc(string &s, const char * prefix, const char * postfix) {
//    s = s.append(postfix);
    s = s.insert(s.size(), postfix, strlen(postfix));
    s = s.insert(0, prefix, strlen(prefix));
    return s;
}

string& desci(string &s, const char * prefix, const char * postfix) {
    s.insert(s.end(), postfix, postfix + strlen(postfix));
    s.insert(s.begin(), prefix, prefix + strlen(prefix));
    return s;
}

int main() {
    string s = "bian";
    char pre[] = "Mr. ";
    char post[] = " Samma";
    cout << desci(s, pre, post) << endl;
    return 0;
}
