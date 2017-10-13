#include "my.h"

int main() {
    forward_list<int> fl{1,2,3,4,5,6,7,8,9};

    auto tbf = fl.before_begin();
    auto k = fl.insert_after(tbf, {11,12,13});
    cout << *k << endl;
    ploop(fl);
    auto bf = fl.before_begin();
    auto end = fl.end();
    auto curr = fl.begin();

    while (curr != end) {
        if (*curr % 2) { //is odd
            curr = fl.erase_after(bf);
        } else {
            bf = curr;
            ++curr;
        }
    }
    ploop(fl);
    return 0;
}
