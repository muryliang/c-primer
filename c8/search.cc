#include "my.h"

int main() {
    forward_list<string> fs{"aa","bb","cc","dd"};
    string s1("qq");
    string s2("ee");

    auto bf = fs.before_begin();
    auto curr = fs.begin();
    auto end = fs.end();
    
    while (curr != end) {
        if (*curr == s1){
            fs.insert_after(curr, s2);
            break;
        }
        bf = curr;
        ++curr;
    }
    if (curr == end) {
        fs.insert_after(bf, s2);
    }
    ploop(fs);
    return 0;
}
