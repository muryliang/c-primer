#include "my.h"

int main() {
//    vector<string> vs{"a", "b", "a", "c","d"};
    vector<string> vs;
    multiset<string> c{"a","b","c","d","b"};
//    copy(vs.begin(), vs.end(), back_inserter(c));
    copy(c.begin(), c.end(), back_inserter(vs));
    ploop(vs);
    return 0;
}
