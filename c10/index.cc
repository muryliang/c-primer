#include "my.h"

int main() {
    multimap<int, int> mi;
    mi.insert({1,2});
    mi.insert({2,4});
    mi.insert({1,3});
    mi.insert({1,5});
    cout << "outout bound range" << endl;
    cout << mi.lower_bound(1.5)->second << endl;
    cout << mi.upper_bound(1.5)->second << endl;
    cout << "outout equal range" << endl;
    auto a = mi.equal_range(1.5);
    cout << a.first->second << " : " << a.second->second << endl;
    mi.insert({1.5,2});
    for (auto i: mi)
        cout << i.first << " : " << i.second << endl;
    return 0;
}
