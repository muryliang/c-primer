#include "my.h"

int main() {
    unordered_set<int> us{1,2,22,4,5,67,7,8};
    auto a = us.equal_range(9);
    for (auto f = a.first; f != a.second; ++f) 
        cout << *f << endl;
}
