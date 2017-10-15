#include "my.h"

bool checksize(const string& s, string::size_type sz) {
    return s.size() >= sz;
}

int main() {
    vector<string> vi = {"aaaa", "bbbbbb", "ccccccccc", "ddd"};
//    cout << count_if(vi.begin(), vi.end(), [](const string p) {return p.size() >= 6;})
 //       << endl;
    string::size_type si = 6;
    auto f = bind(checksize, _1, ref(si));
    si = 1;
    cout << count_if(vi.begin(), vi.end(), f) << endl;
    return 0;
}
